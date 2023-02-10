/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 12 Task D
This program returns a vector of integers whose elements are the pairwise
sums of the elements from the two vectors passed as arguments.
*/

#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){
    vector<int> combined;
    vector<int> largest(max(v1.size(), v2.size()));

    if(v1.size() > v2.size()){
        while(v1.size() > v2.size()){
            v2.push_back(0);
        }
    }
    else if(v2.size() > v1.size()){
        while(v2.size() > v1.size()){
            v1.push_back(0);
        }
    }
    for(int i = 0; i < largest.size(); i++){
        combined.push_back(v1[i] + v2[i]);
    }
    return combined;
}