/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 9 Task D
This program fixes poem.cpp
*/
// broken version copied and pasted from lab website.
#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
    if(!p){
        cout << "Error" << endl;
    }
    cout << *p;
    delete p;

    }
    
}