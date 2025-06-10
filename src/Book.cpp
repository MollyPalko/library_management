#include "Book.h"

Book::Book(string t, Author a, int py, long long i)
    : title(t), author(a), publicationYear(py), isbn(i) {}

string Book::getTitle() const
{
  return title;
}
void Book::setTitle(string title)
{
  this->title = title;
}

Author Book::getAuthor() const
{
  return author;
}
void Book::setAuthor(Author a)
{
  this->author = a;
}

int Book::getPublicationYear() const
{
  return publicationYear;
}
void Book::setPublicationYear(int yr)
{
  this->publicationYear = yr;
}

long long Book::getISBN() const
{
  return isbn;
}
void Book::setISBN(long long isbn)
{
  this->isbn = isbn;
}

string Book::getBookInfo() const
{
  return title + " by " + author.getAuthorName() +
    " ("+to_string(publicationYear)+") ISBN: "+ to_string(isbn);
}


