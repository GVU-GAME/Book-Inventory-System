#ifndef book
#define book

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class book {
    public:
        book() {
            author = new char[20];
            title = new char[20];
            publisher = new char[20];
            price = new double;
            stock = new int;
        }
        char* getAuthor();
        char* getTitle();
        double getPrice();
        char* getPublisher();
        char* getStockPos();
    private:
        char* author, title, publisher;
        double price;
        int stock;

};

#endif //book