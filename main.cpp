#include <iostream>
#include <fstream> 

#include <linked_list.hpp>

using namespace std;

int main() 
{
    //read the string from the file
    fstream in_file("input.txt", ios::in); 
    string input;
    getline(in_file, input, '\0');
    in_file.close();
    
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
