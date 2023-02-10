/*
Daniel Oh
CSCI 135
Genady Maryash
Project 3 Task A
*/

#include <iostream>
#include <string>
#include "Bank.hpp"
#include "Account.hpp"
using namespace std;

std::string Account::generateAccountNumber(){
    std::string an_str = "";
    for(int i{0}; i < 8; i++ ){
        int temp = rand() % 10;
        an_str += std::to_string(temp);
    }
    return an_str;
}

Account::Account(){
    fname = "anonymous";
    lname = "anonymous";
    pin_number = "0000";
    acc_number = generateAccountNumber();
    acc_balance = 0;
}

Account::Account(std::string user_fname, std::string user_lname, std::string new_pin){
    fname = user_fname;
    lname = user_lname;
    if(new_pin.size() == 4){
        pin_number = new_pin;
    }
    else{
        pin_number = "0000";
    }
    acc_number = generateAccountNumber();
    acc_balance = 0;
}

void Account::setFirstName(std::string setfname){
    fname = setfname;
}
void Account::setLastName(std::string setlname){
    lname = setlname;
}

bool Account::setPin(string set_pin_number){
    if(set_pin_number.size() == 4){
        pin_number = set_pin_number;
        return true;
    }
    else{
        return false;
    }
}

std::string Account::getFirstName(){
    return fname;
}
std::string Account::getLastName(){
    return lname;
}
std::string Account::getAccountNumber(){
    return acc_number;
}
std::string Account::getPin(){
    return pin_number;
}

int Account::getBalance(){
    return acc_balance;
}

bool Account::transaction(int total){ //integers{
    if(total + acc_balance < 0){
        return false;
    }
    else{
        acc_balance = acc_balance + total;
        return true;
    }
}

//submission without using namespace std;
//trying with namespace std;