/*
Daniel Oh
Genady Maryash
CS 135
Lab 3B
This program prints the east basin storage min and max in 2018
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string junk;
    getline(fin, junk);
    string date;
    float eastSt, eastEl, westSt, westEl;
    float max_storage = INT_MIN;
    float min_storage = INT_MAX;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        if(eastSt < min_storage){
            min_storage = eastSt;
        }
        else if(eastSt > max_storage){
            max_storage = eastSt;
        }
    }
    fin.close();
    cout << "minimum storage in East basin: " << min_storage << " billion gallons " << endl;
    cout << "maximum storage in East basin: " << max_storage << " billion gallons";
}

    
