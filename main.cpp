#include <iostream>
#include <fstream> 

#include "linked_list.hpp"

using namespace std;

int main() 
{
    LinkedList indiana; 
    indiana.insert(0,49);
    indiana.insert(1,16);
    indiana.insert(2,24);
    indiana.insert(3,22);
    indiana.insert(4,12);
    indiana.insert(5,19);
    indiana.insert(6,14);

    char i;
    bool quit = false;

    while (!quit) {
        cout << "Select a street based on the following list (You may also quit by inputting Q):\n" << endl;

        cout << "A--Augusta\n";
        cout << "I--Indiana\n";
        cout << "M--Mission\n";
        cout << "N--Nora\n";
        cout << "S--Sharp\n";
        cout << "S--Sinto\n" << endl;

        cin >> i;


        switch (i) {
            case 'a':
            case 'A':
                break;
            case 'm':
            case 'M':
                break;
            case 'i':
            case 'I':
                break;
            case 'n':
            case 'N':
                break;
            case 's':
            case 'S':
                break;
            case 'q':
            case 'Q':
                quit = true;
                break;
            default:
                cout << "Invalid input--try again!!";
                break;
        }
    }

    cout << "Exiting program!";
}
