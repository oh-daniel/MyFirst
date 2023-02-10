/*
Daniel Oh
Genady Maryash
CSCI 135
E3.1
This program has the user enter three numbers, and declares whether the sequence is increasing, decreasing, or neither.
*/

#include <iostream>
using namespace std;

int main(){
    double num_1, num_2, num_3;
    cout << "Enter three numbers: ";
    cin >> num_1 >> num_2 >> num_3; //Allows the user to input it all on one line and end, OR entering one at a time as well.
    if (num_3 > num_2 && num_2 > num_1){
        cout << "increasing";
    }
    else if (num_1 > num_2 && num_2 > num_3){
        cout << "decreasing";
    }
    else{
        cout << "neither";
    }
    return 0;
}