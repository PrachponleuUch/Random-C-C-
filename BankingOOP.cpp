//Store details about the amount
//Allows for deposit, withdraw and view_balance

#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::cin;

//Parent
class User
{
    protected: 
    string Name;
    int Age;
    string Gender;

    public:
    User(string name, int age, string gender)
    {
        Name = name;
        Age = age;
        Gender = gender;
    }

    void showDetails()
    {
        cout << "\nPersonal Details \n" << endl;
        cout << "Name - " << Name << endl;
        cout << "Age - " << Age << endl;
        cout << "Gender - " << Gender << endl;
    }
};

//Child
class Bank: public User
{
    protected:
    double Balance = 0;
    public:
    Bank(string Name, int Age, string Gender):User(Name,Age,Gender)
    {

    }

    void deposit(int Amount)
    {
        Balance = Balance + Amount;
        cout << "\nAccount balance has been updated: $" << Balance << endl; 
    }

    void withdraw(int Amount)
    {
        if (Balance > Amount)
        {
            Balance = Balance - Amount;
            cout << "\nAccount balance has been updated: $" << Balance << endl; 
        }
        else
        {
            cout << "\nInsufficient balance.\nAccount balance: $" << Balance << endl; 
        }
    }


    void view_balance()
    {
        showDetails();
        cout << "\nTotal Balance - $" << Balance << endl;
    }
};

int main()
{
    string Username;
    cout << "Username:" <<  endl;
    cin >> Username;
    Bank u1 = Bank(Username, 200, "Male");
    u1.deposit(2000);
    u1.withdraw(5000);
    u1.view_balance();
}