// header file defining author class
// author always has first and last name
// can hold county info, birth date, death date, etc
#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

using namespace std;

class Author
{
  public:
    Author(string fname, string lname);

    Author(string fname, string lname, int by, int dy, string n);

    string getAuthorName() const;

    string getAuthorInfo() const;

  private:
    string firstName;
    string lastName;
    int birthYear;
    int deathYear;
    string nationality;
};

#endif

