#include "Library.h"
#include <iostream>

Library::Library() {
    // constructor implementation
}

bool Library::addBook(string bookName) {
    // implementation for adding a book
    for (int i = 0; i < 10; ++i) {
        if (books[i] == "") {
            books[i] = bookName;
            return true;
        } else if (books[i] == bookName) {
            return false; // book already exists
        }
    }
    return false; // library is full
}

bool Library::removeBook(string bookName) {
    // implementation for removing a book
    for (int i = 0; i < 10; ++i) {
        if (books[i] == bookName) {
            books[i] = "";
            return true;
        }
    }
    return false; // book not found
}

void Library::print() {
    // implementation for printing all books
    cout << "Library contents:" << endl;
    for (int i = 0; i < 10; ++i) {
        if (books[i] != "") {
            cout << books[i] << endl;
        }
    }
}
