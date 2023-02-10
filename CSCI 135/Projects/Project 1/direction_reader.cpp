/*
Author: Daniel Oh
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1: Task 1

This program reads a sequence of letters from cin and prints out its corrresponding direction.
*/

#include <iostream>
using namespace std;


int main(){
    string s;
    while(cin >> s){
        if(s == "R"){
            cout << "Right" << endl;
        }   
        else if(s == "L"){
            cout << "Left" << endl;
        }
        else if(s == "U"){
            cout << "Up" << endl;
        }
        else if(s == "D"){
            cout << "Down" << endl;
        }
        else{
            cout << "Invalid" << endl;
        }    
    }    
    return 0;
}