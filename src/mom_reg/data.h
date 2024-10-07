#ifndef DATA_H
#define DATA_H

#include <vector>
#include <string>

// Enum for blood status
enum class BloodStatus
{
  PureBlood,
  HalfBlood,
  MuggleBorn,
  PartVeela,
  HalfGiant,
  Unknown
};

// Enum for marital status
enum class MaritalStatus
{
  Single,
  Married,
  Widowed,
  Divorced,
  Unknown
};

// Struct to hold the date of birth (DOB) with year, month, and day
struct DateOfBirth
{
  int year;
  int month;
  int day;
};

// Struct to hold character information
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