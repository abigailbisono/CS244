#include "human.h"

Human::Human(){
  age = 15;
  name = "Abigail Bisono";
}

Human::Human(int newAge){
  age = newAge;
}

Human::Human(int newAge, string newName){
  age = newAge;
  name = newName;
}

void Human::set_age(int newAge){
  age = newAge;
}

void Human::set_name(string newName){
  name = newName;
}

void Human::set_hair(string newHair){
  hair = newHair;
}

void Human::set_eye(string eyeColor){
  eye = eyeColor;
}

int Human::get_age(){
  return age;
}

string Human::get_name(){
  return name;
}

void Human::get_hair(){
  cout << "My hair color is ";
  cout << hair;
  if(hair == "brown"){
  cout << ".\n A common color" << endl;
  }
  if(hair == "blue"){
  cout << "like the sky" << endl;
  }
  if(hair == "green"){
  cout << "like the grass" << endl;
  }

}

void Human::get_eyes(){
  cout << "My eyes are ";
  cout << eye << endl;
  if(eye == "brown"){
  cout << " a common color" << endl;
  }
  if(eye == "blue"){
  cout << "like the ocean" << endl;
  }
  if(eye == "gray"){
  cout << "a mix of black and white" << endl;
  }

}

void Human::Birthday(){
  cout << "It's " << name << "'s ";
  cout << "birthday!\n";
  age++;
}
