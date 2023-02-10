/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 13 Task A, B, C. D
This program prints all the sum of numbers in a range, of an array, and whether the string is alphanumeric
*/

//FILLER SUBMISSION FOR OPTIONAL TASKS OF LAB 13
// EXTRA COMMENT
// ANOTHER ONE
// ONE TO BE SURE
#include <iostream>
#include <cctype>
using namespace std;

//Task A
void printRange(int left, int right){ // x is greater than or equal to left, less than or equal to right
    if(left > right);
    else if(left <= right){
        cout << left << " ";
        printRange(left + 1, right);
    }
}
//Task B
int sumRange(int left, int right){
    int count;
    if(left == right){
        return left;
    }
    else if(left > right){
        return 0;
    }
    else{
        return (left + sumRange(left + 1, right));
    }
    return 0;
}
// These following functions are Task C
int sumArrayInRange(int *arr, int left, int right){
    if(left > right){
        return 0;
    }
    else{
        return (arr[left] + sumArrayInRange(arr, left + 1, right));
    }
}
int sumArray(int *arr, int size){
    return sumArrayInRange(arr, 0, size - 1);
}

//Task D

bool isAlphanumeric(string s){
    if(s.empty()){
        return true;
    }
    if(!isalnum(s[0])){
        return false;
    }
    return isAlphanumeric(s.substr(1)); //from pos 1 to the end
}


int main() {
    cout << isAlphanumeric("ABCD") << endl;        // true (1)
    cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
    cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)
}
