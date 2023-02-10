/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 12 Task C
This program appends elements of a second vector into the first, and empties 
the second vector.
*/

#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for(int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}