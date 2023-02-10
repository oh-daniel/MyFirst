/*
Author: Daniel Oh
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1C

This program asks the user for a year and prints out what kind of year it is.
*/
#include <iostream>
using namespace std;

int main(){
    int year; 
    cout << "Enter year: ";
    cin >> year;
    if (year % 4 != 0){
      cout << "Common year";
    }
    else if (year % 100 != 0){
        cout << "Leap year";
    }
    else if (year % 400 != 0){
        cout << "Common year";
    }
    else{
        cout << "Leap year";
        }
    return 0;
}