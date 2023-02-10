/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 7 Task B
This program indents source code files.
*/


#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int countChar(string line, char c){
    int count = 0;
    for(int i = 0; i < line.size(); i++){
        if(line [i] == c){ 
            count = count + 1; // count everytime the specified character is spotted
        }
    }
    return count;
}

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
    int block_count = 0;
    while(getline(cin, newline)){ //while inputting, the the whole line of iuput
        if(removeLeadingSpaces(newline)[0] == '}'){ //closing curly braces are indented one level further than they should be
            for(int i = 0; i < block_count - 1; i++){ 
                cout << '\t';
            }
        }
        else{
            for(int i = 0; i < block_count; i++){ 
                cout << '\t';
            }
        }
        cout << removeLeadingSpaces(newline) << endl;
        block_count = block_count + countChar(newline, '{') - countChar(newline, '}'); // updated count
    }
    return 0;
}
/* This program enhances the program from the previous task. As it reads the input line by line,
 it should also count the number of open and closed { } in it, and keep track of how many blocks 
 is currently open at the beginning of each line. In this program, there is no support for loops and if statements
 that don't have curly braces. No support for // and other comment, and {} inside of strings will be
 misinterpreted*/