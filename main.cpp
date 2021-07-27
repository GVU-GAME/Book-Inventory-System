#include "book.h"

int main() {
    try
    {
        book inventory[20];

        char bTitle[20];
        char bAuthor[20];

        int choice, invCount=0;
        bool isDone = false;

        while(!isDone) {
            cout << "1) Search for a book" << endl;
            cout << "2) Buy a book" << endl;
            cout << "3) Enter a new book" << endl;
            cout << "4) Edit a book info" << endl;
            cout << "5) Exit" << endl;
            cout << "Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                bool copyConf = false;

                cout << "\nEnter the book title: ";
                cin >> bTitle;

                cout << "\nEnter the author of the book: ";
                cin >> bAuthor;

                for(int counter = 0; counter < invCount; counter++) {
                    if(inventory[counter].check(bTitle, bAuthor)) {
                        cout << "Book found!" << endl;
                        copyConf = true;
                        inventory[counter].showDetails();
                    }
                }
                
                if(copyConf == false) {
                    cout << "Unable to find" << bTitle << " by " << bAuthor << endl;
                } 

                break;

            case 2:
                break;

            case 3:
                if(invCount >= 20) {
                    cout << "Unfortunatly our inventory is full, no further books can be added until inventory goes down" << endl;
                } else {
                    inventory[invCount].addBook();
                    invCount++;
                }

                break;

            case 4:
                bool copyConf = false;
                cout << "\nEnter the Title of the Book: ";
                cin >> bTitle;

                cout << "Enter the Author: ";
                cin >> bAuthor;

                for(int count = 0; count < invCount; count++) {
                    if(inventory[count].check(bTitle, bAuthor)) {
                        copyConf = true;
                        inventory[count].editBook();
                    }
                }

                if(copyConf == false) {
                    cout << "This book is not in the inventory!" << endl;
                }
                
                break;

            case 5:
                isDone = true;
                cout << "\nExiting the program" << endl;
                break;
            
            default:
                cout << "\nNot a valid choice!" << endl;
                break;
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(...) {
        cout << "AN ERROR HAS OCCURED" << endl;
    }
    
}