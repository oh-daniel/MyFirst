/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 4 Task B
This program prints a rectangular checkerboard of the users requested size.
*/

#include <iostream>
using namespace std;

int main(){
    int width;
    int height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "Shape:" << endl;
    for(int row = 0; row < height; row++){
        for(int col = 0; col < width; col++){
            if((row+col) % 2 == 0){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
    cout << endl;
    }
}