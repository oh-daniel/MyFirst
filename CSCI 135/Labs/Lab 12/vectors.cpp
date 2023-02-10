/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 12 Task A
This program returns a vector of n integers that range from 0 to n-1
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){
    vector<int> v;
    for(int i = 0; i < n ; i++){
        v.push_back(i);
    }
    return v;
}

int main(){
    vector<int> v = makeVector(10);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}