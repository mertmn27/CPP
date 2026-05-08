#include <iostream>
using namespace std;

class BankAccount {
public:
    string Owner;
    double Balance;

    BankAccount(string owner, double balance)
    {
        Owner = owner;
        Balance = balance;
    }

    void Deposit(double amount)
    {
        Balance += amount;
    }

    void Withdraw(double amount)
    {
        Balance -= amount;
    }

    void show()
    {
        cout << "Owner: " << Owner << "Balance: " << Balance << endl;
    }
};

int main()
{
    BankAccount acc1("Mert", 3000);
    acc1.show();

    acc1.Deposit(500);
    acc1.show();

    acc1.Withdraw(750);
    acc1.show();

    return 0;
}
