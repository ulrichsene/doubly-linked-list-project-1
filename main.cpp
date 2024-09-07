#include <iostream>
#include <linked_list.hpp>

using namespace std;

int main() {
    LinkedList list;


    char input;
    bool quit = false;


    while (!quit) {
        cout << "j";


        cin >> input;


        switch (input) {
            case 'q':
                quit == true;
                break;
            default:
                cout << "Invalid input--try again!!";
                break;
        }
    }


    cout << "Exiting program!";
}
