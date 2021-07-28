#ifndef BOOK
#define BOOK

#include <stdlib.h>
#include <cstring>
#include <iostream>

using namespace std;

class book {
    public:
        book();
        bool check(char[], char[]);
        void showDetails();
        void addBook();
        void editBook();
        int getStock();
        void buyBook();
    private:
        char *author, *title, *publisher;
        float *price;
        int *stock;

};

#endif //BOOK