/*
Daniel Oh
CSCI 135
Genady Maryash
LAB 4 Task G
This program prints a checkerboard of 3 by 3 squares, based on user input dimensions
*/
#include <iostream>
using namespace std;

int main(){
    int width;
    int height;
    cout << "Input width: "; //user dimensions
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << "Shape:" << endl;
    for(int row = 0; row < height; row++){
        for(int col = 0; col < width; col++){
            if((col % 6 == 0 || col % 6 == 1 || col % 6 == 2) && (row % 6 == 3 || row % 6 == 4 || row % 6 == 5)){
                cout << " "; //empty spaces for rows and columns
            }
            else if ((row % 6 == 0 || row % 6 == 1 || row % 6 == 2) && (col % 6 == 3 || col % 6 == 4 || col % 6 == 5)){
                cout << " ";
            }
            else{
                cout << "*"; // stars for every other
            }
        }
        cout << endl; //spacing
    }
    return 0;
}