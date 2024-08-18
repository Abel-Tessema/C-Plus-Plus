#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
    Book (string aTitle, string aAuthor, int aPages) {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
    Book () {
        title = "No title";
        author = "No author";
        pages = 0;
    }
};

int main () {
    Book book1 ("Harry Potter", "J. K. Rowling", 500);
    Book book2 ("Lord of the Rings", "Tolkein", 700);
    Book book3;
    cout << book1.author << endl;
    cout << book3.pages << endl;
    return 0;
}