#include "book.h"

//constructor (allocate memory with new operator)
book::book() {
    author = new char[MAXSIZE];
    title = new char[MAXSIZE];
    publisher = new char[MAXSIZE];
    price = new float;
    stock = new int;
}

//compares the entered title and author with the book's
bool book::check(char bTitle[MAXSIZE], char bAuthor[MAXSIZE]) {
    if(!strcmp(title, bTitle) && !strcmp(author, bAuthor)) {
        return true;
    }

    return false;
}

//displays book's details
void book::showDetails() {
    cout << title << endl;
    cout << author << endl;
    cout << publisher << endl;
    cout << "Amount: $" << *price << endl;
    cout << "In Stock: " << *stock << endl;

    Sleep(1000);
}

//adding information to book
void book::addBook() {
    cout << "\nEnter the: " << endl;

    //gets cin to ignore '\n' from input
    cin.ignore(256, '\n');

    cout << "Title of Book: ";
    cin.getline(title, MAXSIZE);

    cout << "Author: ";
    cin.getline(author, MAXSIZE);

    cout << "Publisher: ";
    cin.getline(publisher, MAXSIZE);

    cout << "Price: ";
    cin >> *price;

    cout << "Stock: ";
    cin >> *stock;
}

//modifies book information
void book::editBook() {
    cout << "\nWhat would you like to edit?" << endl;
    
    //allows selection of which element to edit
    bool editComp = false;
    while(!editComp) {
        int ans;
        
        cout << "\n1) Title" << endl;
        cout << "2) Author" << endl;
        cout << "3) Publisher" << endl;
        cout << "4) Price" << endl;
        cout << "5) Stock" << endl;
        cout << "6) Exit" << endl;
        cin >> ans;

        cin.ignore(256, '\n');

        cout << "\n";
        switch (ans)
        {
        case 1:
            cout << "New Title: ";
            cin.getline(title, MAXSIZE);
            break;

        case 2:
            cout << "New Author: ";
            cin.getline(author, MAXSIZE);
            break;

        case 3:
            cout << "New Publisher: ";
            cin.getline(publisher, MAXSIZE);
            break;

        case 4:
            cout << "New Price: ";
            cin >> *price;
            break;

        case 5:
            cout << "New Stock: ";
            cin >> *stock;
            break;

        case 6:
            cout << "Exiting!" << endl;
            editComp = true;
            break;
        
        default:
            cout << "Not a valid choice!" << endl;
            editComp = true;
            break;
        }
    }
}

//makes sure that this book can be bought
//updates book info
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