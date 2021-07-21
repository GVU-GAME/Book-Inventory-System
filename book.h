#ifndef BOOK
#define BOOK

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

class book {
    public:
        book();
        bool check(char[], char[]);
        //getters
        /*
        char* getAuthor();
        char* getTitle();
        double getPrice();
        char* getPublisher();
        int getStockPos();
        */
    private:
        char *author, *title, *publisher;
        float *price;
        int *stock;

};

#endif //BOOK