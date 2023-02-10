/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 4 Task A
This program prints a solid rectangular box with the dimensions the user inputs
*/

#include <iostream>
using namespace std;

int main(){
    int height, width; //user dimensions
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "Shape:" << endl;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            cout << "*";
        }
    cout << endl; //for each row (which makes up the height) we will start on a new line
    }
}