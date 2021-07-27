#include "book.h"

//Constructor (allocate memory with new operator)
book::book() {
    author = new char[20];
    title = new char[20];
    publisher = new char[20];
    price = new float;
    stock = new int;
}

bool book::check(char bTitle[20], char bAuthor[20]) {
    if(strcmp(title, bTitle) && strcmp(author, bAuthor)) {
        return true;
    }

    return false;
}

void book::showDetails() {
    cout << title << endl;
    cout << author << endl;
    cout << publisher << endl;
    cout << "Amount: $" << price << endl;
    cout << "In Stock: " << stock << endl;
}

void book::addBook() {
    cout << "Enter the: " << endl;
    
    cout << "Title of Book: ";
    cin >> title;

    cout << "Author: ";
    cin >> author;

    cout << "Publisher: ";
    cin >> publisher;

    cout << "Price: ";
    cin >> *price;

    cout << "Stock: ";
    cin >> *stock;
}