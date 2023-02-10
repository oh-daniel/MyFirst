/*
Author: Daniel Oh
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1A

This program prints three items.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num_1, num_2, num_3;
    cout << "Enter the first number: ";
    cin >> num_1;
    cout << "Enter the second number: ";
    cin >> num_2;
    cout << "Enter the third number: ";
    cin >> num_3;
    cout << "The smaller of the three is " << min(num_3, min(num_1, num_2)) << ".";
    return 0;
}