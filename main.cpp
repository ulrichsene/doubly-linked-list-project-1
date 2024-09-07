#include <iostream>
#include <fstream> 

#include <linked_list.hpp>

using namespace std;

int main() 
{
    // read the street data in from the file
        fstream in_file("Indiana.csv", ios::in); 
        string input;
        getline(in_file, input, '\0');
        in_file.close();

        fstream in_file("Nora.csv", ios::in); 
        getline(in_file, input, '\0');
        in_file.close();
        
        fstream in_file("Augusta.csv", ios::in); 
        getline(in_file, input, '\0');
        in_file.close();
        
        fstream in_file("Mission.csv", ios::in); 
        getline(in_file, input, '\0');
        in_file.close();
        
        fstream in_file("Sinto.csv", ios::in); 
        getline(in_file, input, '\0');
        in_file.close();
        
        fstream in_file("Sharp.csv", ios::in); 
        getline(in_file, input, '\0');
        in_file.close();


    LinkedList list;


    char input;
    bool quit = false;


    /* while (!quit) {
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

    */
    cout << "Exiting program!";
}
