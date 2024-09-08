#include <iostream>
#include <fstream> 

#include "linked_list.hpp"
#include "linked_list.cpp"

using namespace std;

void streetPicked(LinkedList street);

int main() 
{
    LinkedList indiana("Indiana"); 
    indiana.insert(0,49);
    indiana.insert(1,16);
    indiana.insert(2,24);
    indiana.insert(3,22);
    indiana.insert(4,12);
    indiana.insert(5,19);
    indiana.insert(6,14);

    LinkedList nora("Nora"); 
    nora.insert(0,31);
    nora.insert(1,15);
    nora.insert(2,21);
    nora.insert(3,28);
    nora.insert(4,28);
    nora.insert(5,16);
    nora.insert(6,15);

    LinkedList augusta("Augusta"); 
    augusta.insert(0,24);
    augusta.insert(1,19);
    augusta.insert(2,18);
    augusta.insert(3,14);
    augusta.insert(4,15);
    augusta.insert(5,12);
    augusta.insert(6,9);

    LinkedList mission("Mission"); 
    mission.insert(0,32);
    mission.insert(1,20);
    mission.insert(2,17);
    mission.insert(3,25);
    mission.insert(4,25);
    mission.insert(5,18);
    mission.insert(6,10);

    LinkedList sinto("Sinto");
    sinto.insert(0,24);
    sinto.insert(1,22);
    sinto.insert(2,19);
    sinto.insert(3,20);
    sinto.insert(4,20);
    sinto.insert(5,25);
    sinto.insert(6,9);

    LinkedList sharp("Sharp");
    sharp.insert(0,33);
    sharp.insert(1,19);
    sharp.insert(2,31);
    sharp.insert(3,23);
    sharp.insert(4,22);
    sharp.insert(5,11);
    sharp.insert(6,1);

    sharp.print_forward(); 

    char i;
    bool quit = false;

    while (!quit) {
        cout << "Select a street based on the following list (You may also quit by inputting Q):\n" << endl;

        cout << "1--Augusta\n";
        cout << "2--Indiana\n";
        cout << "3--Mission\n";
        cout << "4--Nora\n";
        cout << "5--Sharp\n";
        cout << "6--Sinto\n" << endl;
        cout << "7--Print grid" << endl;

        cin >> i;


        switch (i) {
            case '1': //Augusta
                streetPicked(augusta);
                break;

            case '2': //Indiana
                streetPicked(indiana);
                break;

            case '3': //Mission
                streetPicked(mission);
                break;

            case '4': //Nora
                streetPicked(nora);
                break;

            case '5': //Sharp
                streetPicked(sharp);
                break;

            case '6': //Sinto
                streetPicked(sinto);
                break;

            case '7' : // print grid
                print_grid(); 
                break;

            case 'q': //Quitting
            case 'Q':
                quit = true;
                break;
            default:
                cout << "Invalid input--try again!!\n";
                break;
        }
    }

    cout << "Exiting program!";
}

void streetPicked(LinkedList street) 
{
    bool quit = false; 
    while (quit != true)
    {
    cout << "You picked " << street.getName() << "!" << endl;
    cout << "Select from the following list: " << endl; 
    
    cout << "1. Print tree data from west to east" << endl; 
    cout << "2. Print tree data from east to west" << endl; 
    cout << "3. Insert tree data" << endl; 
    cout << "4. Remove tree data" << endl; 
    cout << "5. Search for tree data" << endl; 
    cout << "Quit" << endl; 

    char c; 
    cin >> c; 


    switch (c) 
    {
        case '1': //print_forward
            street.print_forward(); 

            break;
        case '2': //print backward
            street.print_backward();

            break; 
        case '3': //insert
            {string i; 
            cout << "Input the index of the node: " << endl;
            cin >> i; 
            string v; 
            cout << "Input the value of the node: " << endl; 
            cin >> v; 
            int index = stoi(i);
            int value = stoi(v);
            street.insert(index, value); 

            cout << "Done!" << endl; 

            break; }
        case '4': //remove
            {string i; 
            cout << "Input the index of the node: " << endl;
            cin >> i; 
            int index = stoi(i);
            street.remove(index); 

            cout << "Done!" << endl; 

            break; }
        case '5': //search
            {string v;
            cout << "Input the index of the node: " << endl; 
            cin >> v; 
            int value = stoi(v);
            street.search(value); 

            cout << "Done!" << endl; 

            break; }
        case 'q': //Quitting
        case 'Q':
                quit = true;
                break;
        default:
                cout << "Invalid input--try again!!";
                break;
    }

    cout << "";
}
}