/*
Daniel Oh
Genady Maryash
CSCI 135
E3.1
This program has the user enter an integer and outputs whether the integer is negative, positive, or zero.
*/

#include <iostream>
using namespace std;

int main(){
    int num_1;
    cout << "Enter an integer: ";
    cin >> num_1;
    if(num_1 == 0){
        cout << "Zero";
    }
    else if (num_1 > 0){
        cout << "Positive";
    }
    else{
        cout << "Negative";
    }
    return 0;
}