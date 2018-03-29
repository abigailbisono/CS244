class Bank
{
  private:
    double Deposit;
    double Withdraw;
    double Checking;
    double Saving;

  public:
    Bank();
    Bank(double, double);
    void set_Checking(double);
    void set_Saving(double);
    void Deposit(double);
    void Withdraw(double);
    double get_Checking();
    double get_Saving();
    double get_Deposit();
    double get_Withdraw();

};
