/*
Daniel Oh
CSCI 135
Genady Maryash
Lab 6 Task A
This program asks the user to input a line of text, in which the program will
report all characters together with their ASCII codes.*/

#include <iostream>
using namespace std;

int main(){
    string user_input;
    cout << "Input string: ";
    getline(cin, user_input); //cin >> user_input not necessary
    for(int i = 0; i < user_input.size(); i++){
        cout << user_input[i] << " " << (int)user_input[i] << endl;
    }
    return 0;
}





