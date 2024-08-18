#include <iostream>
#include "LinkedList.hpp"

using namespace std;

int main() {
    LinkedList<int> linkedList;
    linkedList.addFirst(1);
    linkedList.addFirst(2);
    linkedList.addFirst(3);
    linkedList.addLast(4);
    linkedList.addLast(5);
    linkedList.addLast(6);
    linkedList.removeAt(2);
    linkedList.removeAt(5);
//    linkedList.removeFirst();
//    linkedList.removeLast();
    linkedList.addAt(2, 1);

    cout << linkedList << endl;

    return 0;
}
