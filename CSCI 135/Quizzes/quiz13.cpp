//Daniel Oh Quiz 13

#include <vector>
#include <iostream>
using namespace std;

    vector<int> makeVector(int n) {
    vector<int> result;
    if (n > 0) {
        for (int i = n; i >= 0; i--) {
            result.push_back(i);
        }
    }
    return result;
}

int main(){
    vector<int> nums = makeVector(5);
    for(int i : nums){
        cout << i << " ";
    }
}