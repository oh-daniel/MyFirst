/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 4 Task E
This program prints the top-right half of a square, given a user input size
*/

#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Input side size: ";
    cin >> size;
    cout << "Shape:" << endl;
    for(int row = 0; row < size; row++){
        for(int col = 0; col < size; col++){
            if(col >= row){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
    cout << endl;
    }
}     