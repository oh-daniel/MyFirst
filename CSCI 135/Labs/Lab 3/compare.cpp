/*
Daniel Oh
Genady Maryash
CS 135
Lab 3C
This program prints which basin had higher elevation during each day of a user provided date interval
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    string start_date, end_date;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()){
        cerr << "File cannot be opened.";
        exit(1);
    }
    cout << "Enter start date: ";
    cin >> start_date;
    cout << "Enter end date: ";
    cin >> end_date;
    string junk;
    getline(fin,junk);
    string date;
    float eastSt, eastEl, westSt, westEl;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(start_date <= date && date <= end_date){
            if(westEl > eastEl){
                cout << date << " West" << endl;
            }
            else if(eastEl > westEl){
                cout << date << " East" << endl;
            }
            else if(eastEl = westEl){
                cout << " Equal" << endl;
            } 
        }
    }      

}