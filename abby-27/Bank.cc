#include "Bank.h"

Bank::Bank(){
  Balance = 0;
  set_AccountNum();
  AccountNum = get_AccountNum();
}

void Bank::set_AcountType(string t){
  AccountType = t;
}

void Bank::set_AccountNum(){
  int AccountNum;
  Srand(time(NULL));
  AccountNum = rand() % 100000000 + 900000000;
}

void Bank::set_name(string A){
  name = A;
}

void Bank::Deposit(double d){
  Deposit = d;
}

void Bank::Withdraw(double w){
  Withdraw = w;
}
