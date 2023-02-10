#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    ifstream fin("data.txt");
    if (fin.fail()){
        cerr << "File cannot be opened for reading." << endl;
        exit(1);
    }
    string COLOR;
    string CODE; 
    while(fin >> COLOR >> CODE)
        cout << COLOR << " " << CODE << endl;
    return 0;
}   