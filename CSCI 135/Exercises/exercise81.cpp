/*
Daniel Oh
CSCI 135
Genady Maryash
Exercise 8.1
This program carries out the following tasks:
Open a file with the name hello.txt.
Store the message “Hello, World!” in the file.
Close the file.
Open the same file again.
Read the message into a string variable and print it.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string greeting;
    ifstream in_file;
    ofstream out_file;
    out_file.open("hello.txt"); 
    out_file << "Hello, World!"; 
    out_file.close(); 
    in_file.open("hello.txt"); 
    getline(in_file, greeting); 
    cout << greeting;
    return 0;
}

// ifstream reads in data FROM a data file
// ofstream writes data OUT to a data file