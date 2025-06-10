// header file defining book class
// book has a title, isbn, pub yr, and author

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "Author.h"

using namespace std;

class Book
{
  public:
    Book(string t, Author a, int py, long long i);

    string getTitle() const;
    void setTitle(string title);

    Author getAuthor() const;
    void setAuthor(Author a);

    int getPublicationYear() const;
    void setPublicationYear(int yr);

    long long getISBN() const;
    void setISBN(long long isbn);

    string getBookInfo() const;

  private:
    string title;
    int publicationYear;
    long long isbn;
    Author author;
};

#endif

