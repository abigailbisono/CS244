#include "human.h"

int main() {
  Human person;
  int testValue;

  string creator = "Abigail Bisono";

  person.set_name(creator);
  person.set_age(15);
  person.set_hair("brown");
  person.set_eye("brown");

  assert(person.get_name() == creator);
  assert(person.get_age() == 15);
  assert(person.get_hair() == "brown");
  assert(person.get_eyes() == "brown");

  testValue = person.get_age();
  person.Birthday();
  assert(person.get_age() == ++testValue);

  person.get_hair();

  return 0;
}
