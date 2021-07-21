#include "book.h"

int main() {
    try
    {
        /* code */
        book inventory[20];
        int choice;
        while(true) {
            cout << "1) Search for a book" << endl;
            cout << "2) Buy a book" << endl;
            cout << "3) Enter a new book" << endl;
            cout << "4) Edit a book info" << endl;
            cout << "Choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;
            
            default:
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