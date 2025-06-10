#include <iostream>
#include "../include/Author.h"
#include "../include/Book.h"

using namespace std;

int totalTests = 0;
int passedTests = 0;

void assertEqual(string actual, string expected, string testName) {
    totalTests++;
    if (actual == expected) {
        cout << "[PASS] " << testName << endl;
        passedTests++;
    } else {
        cout << "[FAIL] " << testName << endl;
        cout << "  Expected: " << expected << endl;
        cout << "  Got     : " << actual << endl;
    }
}

void assertEqual(int actual, int expected, string testName) {
    totalTests++;
    if (actual == expected) {
        cout << "[PASS] " << testName << endl;
        passedTests++;
    } else {
        cout << "[FAIL] " << testName << endl;
        cout << "  Expected: " << expected << endl;
        cout << "  Got     : " << actual << endl;
    }
}

void testAuthorClass() {
    Author a1("Mary", "Shelley");
    Author a2("George", "Orwell", 1903, 1950, "British");

    assertEqual(a1.getAuthorName(), "Mary Shelley", "Author name (default constructor)");
    assertEqual(a2.getAuthorName(), "George Orwell", "Author name (full constructor)");
    assertEqual(a2.getAuthorInfo(), "George Orwell, 1903-1950, British", "Author info (full constructor)");
}

void testBookClass() {
    Author a("J.K.", "Rowling", 1965, 0, "British");
    Book b("Harry Potter and the Philosopher's Stone", a, 1997, 9780747532743LL);

    assertEqual(b.getTitle(), "Harry Potter and the Philosopher's Stone", "Book title");
    assertEqual(b.getPublicationYear(), 1997, "Book publication year");
    assertEqual(b.getISBN(), 9780747532743LL, "Book ISBN");
    assertEqual(b.getAuthor().getAuthorName(), "J.K. Rowling", "Book author name");
    assertEqual(b.getBookInfo(),
        "Harry Potter and the Philosopher's Stone by J.K. Rowling (1997) ISBN: 9780747532743",
        "Book full info"
    );
}

int main() {
    cout << "--- Running Tests ---" << endl;
    testAuthorClass();
    testBookClass();
    cout << "---------------------" << endl;
    cout << "Passed " << passedTests << " / " << totalTests << " tests." << endl;

    return passedTests == totalTests ? 0 : 1;
}


