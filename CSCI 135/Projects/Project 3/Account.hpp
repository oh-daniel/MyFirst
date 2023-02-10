/*
Daniel Oh
CSCI 135
Genady Maryash
Project 3 Task A
*/

#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include <iostream>
using namespace std;



class Account {
private:
    std::string fname;
    std::string lname;
    std::string acc_number;
    std::string pin_number;
    int acc_balance;
    std::string generateAccountNumber();
public:
        //constructor
    Account(); 
    Account(std::string user_fname, std::string user_lname, std::string new_pin); 

        //mutator
    void setFirstName(std::string set_fname); 
    void setLastName(std::string set_lname); 
    bool setPin(std::string set_pin_number); 

        //accessor
    std::string getFirstName(); 
    std::string getLastName(); 
    std::string getAccountNumber(); 
    std::string getPin(); 
    int getBalance(); 

        //transaction
    bool transaction(int total); 
};

#endif