// file Person.h

include <string>
using namespace std;

class Person

{

private:

string firstName;

string lastName;

string birthMonth;

unsigned birthDay;

unsigned birthYear;

string gender; // MALE or FEMALE (no other options allowed ;-)

public:

Person(string first, string last, string month, unsigned day, unsigned year);

string getFirstName() const;

string getLastName() const;

string getBirthMonth() const;

unsigned getBirthDay() const;

unsigned getBirthYear() const;

string getGender() const; // add this accessor method

void print() const; // print in the format below:

};

Class Athlete will extend from class Person, with an added string fields sport and team. Define the
header file for class Athlete, including headers for the constructor plus accessor and mutator methods

for sport and team and a print method that will print the sport and team, each on a separate line after

the Person information is printed.
