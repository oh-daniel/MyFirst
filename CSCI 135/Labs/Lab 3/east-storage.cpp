/*
Daniel Oh
Genady Maryash
CS 135
Lab 3A
This program prints the east basin storage based on the input date of the user.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    string user_date; //Entered in MM/DD/YYYY format
    string date;
    float eastSt, eastEl, westSt, westEl;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()){
        cerr << "File cannot be opened.";
        exit(1);
    }
    cout << "Enter date: ";
    cin >> user_date;
    string junk;
    getline(fin, junk);
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(date == user_date){
            cout << "East basin storage: " << eastSt << endl;
        }
    }    
    fin.close();
}