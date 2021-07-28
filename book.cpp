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

void book::editBook() {
    cout << "What would you like to edit?" << endl;
    
    bool editComp = false;
    int ans;
    while(!editComp) {
        cout << "1) Title" << endl;
        cout << "2) Author" << endl;
        cout << "3) Publisher" << endl;
        cout << "4) Price" << endl;
        cout << "5) Stock" << endl;
        cout << "6) Exit" << endl;
        cin >> ans;

        switch (ans)
        {
        case 1:
            cout << "New Title: " << endl;
            cin >> title;
            break;

        case 2:
            cout << "New Author: " << endl;
            cin >> author;
            break;

        case 3:
            cout << "New Publisher: " << endl;
            cin >> publisher;
            break;

        case 4:
            cout << "New Price: " << endl;
            cin >> *price;
            break;

        case 5:
            cout << "New Stock: " << endl;
            cin >> *stock;
            break;

        case 6:
            cout << "Exiting!" << endl;
            editComp = true;
            break;
        
        default:
            cout << "Not a valid choice!" << endl;
            break;
        }
    }
}

int book::getStock() {
    return *stock;
}

void book::buyBook() {
    int copyAmount;
    cout << "How many copies do you need? ";
    cin >> copyAmount;

    if(*stock < copyAmount) {
        cout << "Sorry there is not enough instock" << endl;
    } else {
        cout << "Pleasure doing business with you!" << endl;
        cout << "Amount: $ " << (*price * copyAmount) << endl;
        *stock -= copyAmount;
    }
}