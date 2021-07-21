#include "book.h"

//Constructor (allocate memory with new operator)
book::book() {
    author = new char[20];
    title = new char[20];
    publisher = new char[20];
    price = new float;
    stock = new int;
}

bool book::check(char title[20], char author[20]) {

}