# Library Management System (C++ Terminal Project)

## Overview

This is a beginner-friendly C++ project to simulate a basic **Library Management System** using Object-Oriented Programming principles. It is a terminal-based application with no GUI, designed to help learners practice C++ fundamentals including classes, objects, encapsulation, file I/O, and dynamic memory management.

The system keeps track of **Books**, **Authors**, and a **Library** that manages these entities. Users can add new books, list available books, search for books, and remove them from the system.

## Features

- Add new authors and books
- List all books in the library
- Search for books by title or author
- Remove books from the library
- Load/save data from/to a file (optional, but encouraged for practice)
- Simple terminal-based menu system

## Object-Oriented Structure

### Class: `Author`
Represents an author.

**Attributes:**
- `std::string name`
- `std::string email`
- `std::string biography` *(optional)*

**Methods:**
- Constructor(s)
- Getters and setters
- Display author info

---

### Class: `Book`
Represents a book in the library.

**Attributes:**
- `std::string title`
- `std::string isbn`
- `int publicationYear`
- `Author author` (composition)

**Methods:**
- Constructor(s)
- Getters and setters
- Display book info

---

### Class: `Library`
Manages a collection of books.

**Attributes:**
- `std::vector<Book> books` *(or use dynamic array if you want pointer practice)*

**Methods:**
- `void addBook(const Book&)`
- `void listBooks() const`
- `Book* searchByTitle(const std::string&)`
- `std::vector<Book> searchByAuthor(const std::string&)`
- `bool removeBook(const std::string& isbn)`
- *(Optional)* `void loadFromFile(const std::string& filename)`
- *(Optional)* `void saveToFile(const std::string& filename)`

---

### Class: `LibraryApp`
Encapsulates the main loop and CLI menu.

**Methods:**
- `void run()`
- Handles user input and invokes library functions

---

## Requirements

- Use C++11 or later
- Use standard library containers (e.g., `std::vector`)
- Apply basic OOP principles
- No third-party libraries
- Command-line interface only
- Bonus: Implement file I/O for persistence

## Suggested File Structure

/LibraryManagementSystem
```
│
├── src/
│ ├── main.cpp
│ ├── Author.h / Author.cpp
│ ├── Book.h / Book.cpp
│ ├── Library.h / Library.cpp
│ └── LibraryApp.h / LibraryApp.cpp
│
├── data/
│ └── library.txt # Optional: file-based storage
│
└── README.md
```
