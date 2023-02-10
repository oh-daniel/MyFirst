/*
Daniel Oh
Genady Maryash
CSCI 135
E4.8
This program has the user enter a word, and prints each character of the word on a separate line.
*/

#include <iostream>
using namespace std;

int main(){
    string user_input;
    cout << "Enter a word: ";
    cin >> user_input;
    for(int i = 0; i < user_input.size(); i++)
        cout << user_input[i] << endl;
    return 0;
}
