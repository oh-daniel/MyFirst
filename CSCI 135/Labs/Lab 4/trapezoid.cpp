/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 4 Task F
This program prints a trapezoid based on the dimensions of user input
*/

#include <iostream>
using namespace std;

int main(){
    int width, height;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;

    int spaces = 0;
    int stars = width;
    for(int i = 0; i < height; i++){
        spaces += 1;
        stars -=2;
    }
    if(stars + 1 < 0){
        cout << "Impossible shape!" << endl;
    }
    else{
        cout << "Shape:" << endl;
        for(int row = 0; row < height; row++){
            for(int col = 0; col < width; col++){
                if(col >= width - row || row >= col + 1){
                    cout << " ";
                }
                else{
                    cout << "*";
                }
            }
        cout << endl;
        }
    }
}   


