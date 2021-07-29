#include "book.h"

int main() {
    try
    {
        //book inventory
        book inventory[MAXINV];

        //book title and author
        char bTitle[MAXSIZE];
        char bAuthor[MAXSIZE];

        //amount of books in inventory
        int invCount = 0;

        bool isDone = false;
        while(!isDone) {
            int choice;

            //ask user for action
            cout << "\n1) Search for a book" << endl;
            cout << "2) Buy a book" << endl;
            cout << "3) Enter a new book" << endl;
            cout << "4) Edit a book info" << endl;
            cout << "5) Exit" << endl;
            cout << "Choice: ";
            cin >> choice;

            switch (choice) {
            case 1:
            {
                bool copyConf = false;

                //gets book title and author
                cout << "\nEnter the book title: ";
                cin.ignore(256, '\n');
                cin.getline(bTitle, 20);

                cout << "Enter the author of the book: ";
                cin.getline(bAuthor, 20);

                //makes sure book exist in inventory
                for(int counter = 0; counter < invCount; counter++) {
                    if(inventory[counter].check(bTitle, bAuthor)) {
                        //display book info if found
                        cout << "\nBook found!" << endl;
                        copyConf = true;
                        inventory[counter].showDetails();
                    }
                }
                
                //prints if book does not exist
                if(!copyConf) {
                    cout << "\nUnable to find " << bTitle << " by " << bAuthor << endl;
                    Sleep(1000);
                } 
                break;
            }

            case 2:
            {
                bool copyConf = false;

                //gets book title and author
                cout << "\nTitle of the Book: ";
                cin.ignore(256, '\n');
                cin.getline(bTitle, 20);

                cout << "Author: ";
                cin.getline(bAuthor, 20);

                for(int count = 0; count < invCount; count++) {
                    if(inventory[count].check(bTitle, bAuthor)) {
                        //prints buy prompt if book is buyable
                        copyConf = true;
                        inventory[count].buyBook();
                    }
                }

                if(!copyConf) {
                    cout << "\nUnable to find " << bTitle << " by " << bAuthor << endl;
                    Sleep(1000);
                }
                break;
            }

            case 3:
            {
                //makes sure the inventory is not full
                if(invCount >= MAXINV) {
                    cout << "\nUnfortunatly our inventory is full, no further books can be added until inventory goes down" << endl;
                } else {
                    //adds new book to inventory is there is space
                    inventory[invCount].addBook();
                    invCount++;
                }
                break;
            }

            case 4:
            {
                bool copyConf = false;

                //gets book title and author
                cout << "\nEnter the Title of the Book: ";
                cin.ignore(256, '\n');
                cin.getline(bTitle, MAXSIZE);

                cout << "Enter the Author: ";
                cin.getline(bAuthor, MAXSIZE);

                for(int count = 0; count < invCount; count++) {
                    if(inventory[count].check(bTitle, bAuthor)) {
                        //edits book if found
                        copyConf = true;
                        inventory[count].editBook();
                    }
                }

                if(!copyConf) {
                    cout << "\nThis book is not in the inventory!" << endl;
                    Sleep(1000);
                }              
                break;
            }

            case 5:
                {
                    cout << "\nExiting the program" << endl;
                    isDone = true;
                    break;
                }
            
            default:
                {
                    cout << "\nNot a valid choice!" << endl;
                    isDone = true;
                    break;
                }
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