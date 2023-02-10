/*
Author: Daniel Oh
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1D

This program asks the user to input the year and the month and prints the number of days in that month.
*/

#include <iostream>
using namespace std;
int main(){
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout << "31 days";
    }
    else if (year % 4 !=0 && month == 2){
        cout << "28 days";
    }
    else if (year % 100 != 0 && month == 2){
        cout << "29 days";
    }
    else if (year % 400 !=0 && month ==2){
        cout << "28 days";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        cout << "30 days";
    }
    else {
        cout << "29 days";
    }
    return 0;
}




