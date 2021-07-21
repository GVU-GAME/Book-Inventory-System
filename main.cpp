#include "book.h"

int main() {
    try
    {
        /* code */
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(...) {
        cout << "AN ERROR HAS OCCURED" << endl;
    }
    
}