#include <iostream>

class BankAccount
{
public:
    BankAccount(int acc_num) : account_number(acc_num)
    {
        total_accounts++;
    }

    static int getTotalAccounts()
    {
        return total_accounts;
    }

private:
    static int total_accounts;
    int account_number;
};

int BankAccount::total_accounts = 0;

int main()
{
    std::cout << BankAccount::getTotalAccounts() << std::endl;
    BankAccount ba(123);
    std::cout << BankAccount::getTotalAccounts() << std::endl;

    return 0;
}