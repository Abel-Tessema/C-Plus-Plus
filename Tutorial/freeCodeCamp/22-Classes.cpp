#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
};

int main () {
    Book book1;
        book1.title = "Harry Potter";
        book1.author = "J. K. Rowling";
        book1.pages = 500;
    Book book2;
        book2.title = "Lord of the Rings";
        book2.author = "Tolkein";
        book2.pages = 700;

        book2.title = "Hunger Games";

    cout << book1.title << endl;
    cout << book2.title << endl;
    return 0;
}

/*
A class is a blueprint/specs for an object.
An object is a specific instance of a class.
*/