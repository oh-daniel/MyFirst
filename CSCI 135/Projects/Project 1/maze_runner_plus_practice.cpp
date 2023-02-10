/*
Daniel Oh
CSCI 135
Genady Maryash
Project 1 Task 3
This program streams in multiple lists of directions that determines if it correctly traverses the maze.
*/

#include <iostream>
#include <string>
#include <fstream>
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
    int row = 0; //starting point
    int column = 1; //starting point
    int ending_row = 4; //ending point
    int ending_col = 5; //ending point

    string directions, line;
    
    while(cin >> directions){ //input can be D U L R
        for(string directions; getline(cin, line, ';');){
            for(int i = 0; i < line.size(); i++){
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
}