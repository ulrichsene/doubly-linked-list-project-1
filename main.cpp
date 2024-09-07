#include <iostream>
#include <fstream> 

#include "linked_list.hpp"

using namespace std;

int main() 
{
    // read the street data in from the file
        fstream in_file("indiana.csv", ios::in); 
        string input;
        getline(in_file, input, '\0');
        in_file.close();

        fstream in_file1("nora.csv", ios::in); 
        getline(in_file1, input, '\0');
        in_file.close();
        
        fstream in_file2("augusta.csv", ios::in); 
        getline(in_file2, input, '\0');
        in_file.close();
        
        fstream in_file3("mission.csv", ios::in); 
        getline(in_file3, input, '\0');
        in_file.close();
        
        fstream in_file4("sinto.csv", ios::in); 
        getline(in_file4, input, '\0');
        in_file.close();
        
        fstream in_file5("sharp.csv", ios::in); 
        getline(in_file5, input, '\0');
        in_file.close();


    char i;
    bool quit = false;


    while (!quit) {
        cout << "j";


        cin >> i;


        switch (i) {
            case 'q':
                quit = true;
                break;
            default:
                cout << "Invalid input--try again!!";
                break;
        }
    }


    cout << "Exiting program!";
}
