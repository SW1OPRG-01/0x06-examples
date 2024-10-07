#include "register.h"

void add(Character character) {
  characters.push_back(character);
}

void remove(std::string name) {
  for(int i = 0; i < characters.size(); i++) {
    Character c = characters.at(i);
    if (c.firstName + " " + c.surname == name) {
      characters.erase(characters.begin() + i); 

    }
  }
}