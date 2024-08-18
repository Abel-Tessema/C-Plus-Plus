#include <iostream>

using namespace std;

int main() {

    /*
    cout << "There was once a man named George." << endl;
    cout << "He was 70 years old." << endl;
    cout << "He liked the name George." << endl;
    cout << "But he did not like being 70." << endl;
    */
    
    /*
    cout << "There was once a man named John." << endl;
    cout << "He was 35 years old." << endl;
    cout << "He liked the name John." << endl;
    cout << "But he did not like being 35." << endl;
    */
    
    string characterName;
    int characterAge;
    // characterName = "John";
    // characterAge = 35;

    characterName = "Tom";
    characterAge = 50;

    cout << "There was once a man named " << characterName << "." << endl;
    cout << "He was " << characterAge << " years old." << endl;
    
    characterName = "Mike";

    cout << "He liked the name " << characterName << "." << endl;
    cout << "But he did not like being " << characterAge << "." << endl;

    return 0;

}