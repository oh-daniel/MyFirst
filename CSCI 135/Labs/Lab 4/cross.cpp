/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 4 Task A
This program prints a diagonal cross of a size the user inputs
*/

#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Input size: ";
    cin >> size;
    cout << "Shape: " << endl;
    for(int row = 0; row < size; row++){
        for(int col = 0; col < size; col++){
            if(col == row || col == size - row - 1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
