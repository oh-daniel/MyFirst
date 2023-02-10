/*
Damiel Oh
CSCI 135
Genady Maryash
Exercise 5.6
This program prints out the middle character(s) of a string.
*/
#include <iostream>
#include <string>
using namespace std;

string middle(string str){
    int size;
    if(str.size() % 2 == 0){ //even
        return str.substr((str.size()-1)/2, 2);
    }
    else if(str.size() % 2 == 1){
        return str.substr(str.size()/2, 1);
    }
}
int main(){
    cout << middle("middle") << endl;
    return 0;
}