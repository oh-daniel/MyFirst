/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 2C
This program creates an array of ten integers,
and provies the user with an interface to edit any
of its elements.
*/

#include <iostream>
using namespace std;

int main(){
    int i;
    int myData[10]; //Make an array with 10 elements, 0-9
    for(int i = 0; i < 10; i++){ //no semicolon after a for loop
        myData[i] = 1; //Assign each element of the array the value of 1
    }
    int v;
    do{
        for(int i = 0; i < 10; i++){
            cout << myData[i] << " "; //Print out each value of the array (all ones)
        }
        cout << endl;
        cout << "Input index: "; //Gather inputs
        cin >> i;
        cout << "Input value: ";
        cin >> v;
        if(i >= 0 && i < 10){ //If the index is within 0-10 (not including 10), make that index the v value.
            myData[i] = v;
        }
    }while(i >= 0 && i < 10); //Repeats the process if the index was good
    do{
        cout << "Index out of range. Exit.";
    }while(i >= 10 && i < 0); //Stops the cycle if the index was out of range.
    return 0;
}