#ifndef DATA_H
#define DATA_H

#include <vector>
#include <string>

enum class BloodStatus
{
  PureBlood,
  HalfBlood,
  MuggleBorn,
  PartVeela,
  HalfGiant,
  Unknown
};

enum class MaritalStatus
{
  Single,
  Married,
  Widowed,
  Divorced,
  Unknown
};

struct DateOfBirth
{
  int year;
  int month;
  int day;
};

struct Character
{
  std::string firstName;
  std::string surname;
  DateOfBirth dob;
  std::string placeOfBirth;
  MaritalStatus maritalStatus;
  BloodStatus bloodStatus;
};

extern std::vector<Character> characters;

#endif