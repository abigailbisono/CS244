#include "Bank.h"

Bank::Bank(){
  Checking = 0;
  Saving = 0;
  Deposit = 0;
  Withdraw = 0;
}

Bank::Bank(double c, double s){
  Checking = c;
  Saving = s;
}

void Bank::set_Checking(double c){
  Checking = c;
}

void Bank::set_Saving(double s){
  Saving = s;
}

double Bank::get_Checking(){
  return Checking;
}

double Bank::get_Saving(){
  return Saving;
}

double Bank::get_Deposit(){
  return Deposit;
}

double Bank::get_Withdraw(){
  return Withdraw;
}
