
// Write the constructor and print methods for class Athlete below.
// file Athlete.cpp

include "stdafx.h"
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

Person(first, last, month, day ,year):Person->print;

cout<<”SPORT is ” <<sport<<endl;

cout<<”TEAM is ”<<t<<endl;

}
