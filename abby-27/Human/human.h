#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>
#include<string>

#define NDEBUG
#include <cassert>
using namespace std;

class Human

{
  private:
    int age;
    string name, hair, eye;

  public:
    Human();
    Human(int);
    Human(int, string);
    void set_age(int);
    void set_name(string);
    void set_hair(string);
    void set_eye(string);
    int get_age();
    string get_name();
    void get_hair();
    void get_eyes();
    void Birthday();
};

#endif //HUMAN_H
