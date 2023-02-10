/*
Daniel Oh
CSCI 135
Genady Maryash
Project 3 Task 2
*/

#ifndef BANK_HPP
#define BANK_HPP

#include <string>
#include "Account.hpp"
#include <iostream>
using namespace std;

class Bank{
private:
    Account Accounts[200]; //ARRAY is: Accounts
    int count; //NUMEBER OF EXISTING USERS IS: count
public:
    Bank();
    std::string createAccount(std::string fname, std::string lname, std::string pin);
    bool removeAccount(std::string acc_number);
    bool withdraw(int amount, std::string acc_number, std::string pin);
    bool deposit(int amount, std::string acc_number, std::string pin);
    int getAccountBalance(std::string acc_number, std::string pin);
};

#endif