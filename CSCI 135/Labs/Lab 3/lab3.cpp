#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main (){
    ifstream fin("Current_Reservoir_Levels.tsv");
    if(fin.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string junk;
    getline(fin, junk);

    string date;
    float eastSt, eastEl, westSt, westEl;
    while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        cout << date << " " << eastSt << endl;
    }
    fin.close();
}
