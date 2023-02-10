/*
Author: Daniel Oh
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E2.1

This program prints fuel efficiency.
*/



#include <iostream>
using namespace std;

int main(){
    float gallons_of_gas;
    float fuel_efficiency;
    float gas_price;
    cout << "Input the number of gallons of gas in the tank, the fuel efficiency in miles per gallon, and the price of gas per gallon: ";
    cin >> gallons_of_gas;
    cin >> fuel_efficiency;
    cin >> gas_price;
    cout << "The cost per 100 miles is $" << (100 / fuel_efficiency) * gas_price << ".";
    cout << "The car can go " << gallons_of_gas * fuel_efficiency << " miles.";
    return 0;
}