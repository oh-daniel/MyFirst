/*
Daniel Oh
Genady Maryash
CS 135
Lab 3D
This program prints the west basin elevation for each day in reverse chronological order of a user provided date interval
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
    getline(fin, junk);
    string date;
    float eastSt, eastEl, westSt, westEl;
    string date_arr[365];
    float elevations_arr[365];
    int index = 0;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(start_date <= date && date <= end_date){
            date_arr[index]= date;
            elevations_arr[index] = westEl;
            index++;
        }
    }
   
    for(int i = index-1; index > -1; index--){
        cout << date_arr[index] << " " <<  elevations_arr[index] << " ft" << endl;
    }
    fin.close();
}