/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 7 Task A
This program indents source code files.
*/


#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string removeLeadingSpaces(string line){
    int i = 0;
    while(isspace(line[i])){
        i++;
    }
    line.erase(0,i); //.erase the empty spaces
    return line;
}

int main(){
    string newline;
    int i = 0;
    while(getline(cin, newline, '\n')){ //while inputting, the the whole line of iuput
        cout << removeLeadingSpaces(newline) << endl;
    }
    return 0;
}

/* Program uses a function that iterates through a string until it reaches a non-empty space character,
removes the previous spaces, and returns the line without the beginning spaces.*/