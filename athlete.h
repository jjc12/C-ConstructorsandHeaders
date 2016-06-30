
// file Athlete.h

include <string>
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
