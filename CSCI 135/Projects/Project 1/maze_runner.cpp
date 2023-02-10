/*
Daniel Oh
CSCI 135
Genady Maryash
Project 1 Task B
This program streams in a list of direction that determines if it correctly traverses the maze.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int maze[6][6] = {
        1,0,1,1,1,1,
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1
    };
    int row = 0; //maze starting point
    int column = 1; //maze starting point
    int ending_row = 4; //maze ending point
    int ending_col = 5; //maze ending point

    string directions;
    while(cin >> directions){ //input can be D U L R
        for(int i = 0; i < directions.size(); i++){
            if(directions == "D" && maze[row + 1][column] == 0){ //checks for letter and if the consequential position would be empty (0)
                row = row + 1;
            }
            else if(directions == "U" && maze[row - 1][column] == 0){
                row = row - 1;
            }
            else if(directions == "L" && maze[row][column - 1] == 0){
                column = column - 1;
            }
            else if(directions == "R" && maze[row][column + 1] == 0){
                column = column + 1;
            }
        }
    }
    if(column == ending_col && row == ending_row){ // if we get to the end by matching columns and rows, maze succesful
        cout << "You got out of the maze" << endl;
    }
    else{
        cout << "You are stuck in the maze" << endl;
    }
    return 0;
}

