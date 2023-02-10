#include <iostream>
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

    string s;
    while(cin >> s){
        if(s == "D"){
            row = row + 1;
            }
            else if(s == "U"){
                row = row - 1;
            }
            else if(s == "L"){
                column = column - 1;
            }
            else if(s == "R"){
                column = column + 1;
            }
            else{}
           
        }
        if(row == ending_row && column == ending_col){
            cout << "You got out of the maze" << endl;
            }
        else{
        cout << "You are stuck in the maze" << endl; 
        }
    return 0;
}

#include <iostream>
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

    string s;
    while(cin >> s){ //input can be D,U,L,R
        for(int i = 0; i < s.size(); i++){
            if(s == "D" && maze[row + 1][column] == 0){
                row = row + 1;
            }
            else if(s == "U" && maze[row - 1][column] == 0){
                row = row - 1;
            }
            else if(s == "L" && maze[row][column - 1] == 0){
                column = column - 1;
            }
            else if(s == "R" && maze[row][column + 1] == 0){
                column = column + 1;
            }
            else{}
        }
    if(row == ending_row && column == ending_col){
        cout << "You got out of the maze" << endl;
    }
    
    else{
        cout << "You are stuck in the maze" << endl;
    }
    
    }
    
    return 0;
}
