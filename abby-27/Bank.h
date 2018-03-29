#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Bank
{
  private:
    int AccountNum;
    double Balance;
    string AccountType;
    string name;

  public:
    Bank();

    void set_AccountType(double);
    void set_AccountNum();
    void set_name(string);
    
    void Deposit(double);
    void Withdraw(double);

    double get_Balance();
    double get_AccountType();
    double get_AccountNum();
    double get_name();
};
