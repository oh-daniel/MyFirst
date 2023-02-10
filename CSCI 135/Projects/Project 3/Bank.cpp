/*
Daniel Oh
CSCI 135
Genady Maryash
Project 3 Task 2
*/

#include <iostream>
#include <string>
#include "Bank.hpp"
#include "Account.hpp"
using namespace std;


Bank::Bank(){
    count = 0;
}

std::string Bank::createAccount(std::string fname, std::string lname, std::string pin){
    if(count < 200){ 
        Accounts[count] = Account(fname, lname, pin);
        count++;
        return Accounts[count - 1].getAccountNumber();
    }
    else{
        return "-1";
    }
}

bool Bank::removeAccount(std::string acc_number){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number){
            Accounts[i] = Account();
            return true;
        }    
    }
    return false;
}

bool Bank::withdraw(int amount, std::string acc_number, std::string pin){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin){
            if(Accounts[i].getBalance() >= amount){
                Accounts[i].transaction(-1 * amount); //negative transaction
                return true;
            }
        }
    }
    return false;
}


bool Bank::deposit(int amount, std::string acc_number, std::string pin){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin){
            Accounts[i].transaction(amount); //positive transaction
            return true;
        }
    }
    return false;
}

int Bank::getAccountBalance(std::string acc_number, std::string pin){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin){
            return Accounts[i].getBalance();
        }
    }
    return -1;
}





/*
First name = fname
Last name = lname
Pin = pin
Account number = acc_number
Transaction amount = amount
Edit: Tried splitting out the double if statement conditonals into seperate if statements.
Edit: Took out std::
Edit: Put std:: back in, Libraries were accidentally commented
Edit: Changing variable names for convenience
*/