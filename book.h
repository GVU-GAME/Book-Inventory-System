#ifndef BOOK
#define BOOK

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class book {
    public:
        book();
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

#endif //BOOK