// file Person.h

#include &lt;string&gt;

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

1. Class Athlete will extend from class Person, with an added string fields sport and team. Define the

header file for class Athlete, including headers for the constructor plus accessor and mutator methods

for sport and team and a print method that will print the sport and team, each on a separate line after

the Person information is printed.

// file Athlete.h

#include &lt;string&gt;

using namespace std;

class Athlete

{

private:

string sport;

string t;

public:

Athlete(string first, string last, string month, unsigned day, unsigned year, string event, string

team);

string getSport()const;

string getT()const;

void setSport(string event) const;

void setT(string team) const;

void print()const;

2. Write the constructor and print methods for class Athlete below.

// file Athlete.cpp

#include &quot;stdafx.h&quot;

public Athlete: class Person //athlete inherits from person

{

Athlete::Athlete(string first, string last, string month, unsigned day, unsigned year, string event, string

team)

:Person(first, last, month, day, year), sport(event), t(team);

{}

public:

string Athlete::getSport()const

{

return sport;

}

string Athlete::getT()const

{

return t;

}

void Athlete::setSport(string event)const

{

sport=event;

}

void Athlete::setT(string team)const

{

t=team;

}

void Athlete::print()const

{

Person(first, last, month, day ,year):Person-&gt;print;

cout&lt;&lt;”SPORT is ” &lt;&lt;sport&lt;&lt;endl;

cout&lt;&lt;”TEAM is ”&lt;&lt;t&lt;&lt;endl;

}
