#include <iostream>

using namespace std;

class Book
{
public:
    Book(int x) : c{x} {};
    int a;
    int b;
    class Bookmark
    {
    public:
        int c;
        int d;
    }
};

int main()
{
    Book book;
    Book::Bookmark bookmark;
    return 0;
}