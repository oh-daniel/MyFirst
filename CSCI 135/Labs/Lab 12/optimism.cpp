/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 12 Task B
This program returns a vector with only positive integers in the same order.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(const vector<int> v){
    vector<int> pos;
    for(int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            pos.push_back(v[i]);
        }
    }
    return pos;
}

//just take the positives instead of implementing a method of disregarding negatives

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(2);

    vector<int> v2;
    v2 = goodVibes(v);

    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }

    return 0;
}