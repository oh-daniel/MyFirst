/*
Daniel Oh
CSCI 135
Genady Maryash
Project 1 Task D
This program streams in a maze and sets up its corresponding array, 
then takes in directions to see if they can traverse the custom maze.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("maze_and_directions.txt");
    if(fin.fail()){
        cerr << "File cannot be opened.";
        exit(1);
    }
    int maze[10][10] = {};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            fin >> maze[i][j];
        }
    }
    int row_starting, col_starting, row_ending, col_ending, row, column;
    char separator;
    fin >> row_starting >> col_starting >> row_ending >> col_ending >> separator;
    if(separator == ';'){
        row = row_starting;
        column = col_starting;
    }
    char directions; //single characters
    while(fin >> directions){ //input can be D U L R, separated by ';'
        if(directions == 'D' && maze[row + 1][column] == 0){
            row = row + 1;
        }
        else if(directions == 'U' && maze[row - 1][column] == 0){
            row = row - 1;
        }
        else if(directions == 'L' && maze[row][column - 1] == 0){
            column = column - 1;
        }
        else if(directions == 'R' && maze[row][column + 1] == 0){
            column = column + 1;
        }
        else if(directions == ';'){ //test the maze position whenever we input a ';'
            if(column == col_ending && row == row_ending){
                cout << "You got out of the maze." << endl;
            }
            else{
                cout << "You are stuck in the maze." << endl;
            }
            row = row_starting;
            column = col_starting;      
        }  
    }
    return 0;
}
