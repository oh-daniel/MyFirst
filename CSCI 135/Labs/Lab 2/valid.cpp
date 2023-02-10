/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 2A
This program asks the user to input an integer that is between
0 and 100 (non-inclusive) then prints out the value squared.
*/
#include <iostream>
using namespace std;

int main(){
    int num_1;
    cout << "Please enter an integer: ";
    cin >> num_1;
    while(num_1 <= 0 || num_1 >= 100){
        cout << "Please re-enter: ";
        cin >> num_1;
    }
    cout << "Number squared is: " << num_1 * num_1 << endl;
    return 0;
}

