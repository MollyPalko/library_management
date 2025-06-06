#include "Author.h"

Author::Author(string fname, string lname)
{
  firstName = fname;
  lastName = lname;
  birthYear = 0;
  deathYear = 0;
  nationality = "none";
}

Author::Author(string fname, string lname, int by, int dy, string n)
{
  firstName = fname;
  lastName = lname;
  birthYear = by;
  deathYear = dy;
  nationality = n;
}

string Author::getAuthorName() const
{
  return firstName + " " + lastName;
}

string Author::getAuthorInfo() const
{
  return getAuthorName() + ", " + to_string(birthYear) + "-" +
        to_string(deathYear) + ", " + nationality;
}


