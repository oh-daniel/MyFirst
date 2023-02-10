#include <iostream>
using namespace std;


int main(){
    int maze[6][6] = {
        1,0,1,1,1,1,
        1,0,0,0,1,1,
        1,0,1,0,0,1,
        1,0,1,0,1,1,
        1,0,0,0,0,0,
        1,1,1,1,1,1 } ;
    string s ;
    while(cin >> s){
        if(s == "R"){
            if (maze[row][column + 1] == 0)
                column += 1 ;
        }   
        else if(s == "L"){
            cout << "Left" << endl;
        }
        else if(s == "U"){
            cout << "Up" << endl;
        }
        else if(s == "D"){
            cout << "Down" << endl;
        }
        else{
            cout << "Invalid" << endl;
        }    
    }    
    return 0;
}