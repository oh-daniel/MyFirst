/*
Daniel Oh
CSCI 135
Genady Maryash
Project 3 Task B
*/

#ifndef BANK_HPP
#define BANK_HPP

#include <string>
#include <iostream>
#include "Account.hpp"
using namespace std;



class Bank {
private:
    Account Accounts[200];
    int count;
public:
    Bank();
    std::string createAccount(std::string fname, std::string lname, std::string new_pin);
    bool removeAccount(std::string acc_number);
    bool withdraw(std::string acc_number, std::string pin, int total); 
    bool deposit(std::string acc_number, std::string pin, int total);
    int getAccountBalance(std::string acc_number, std::string new_pin);
};

#endif



/*
Daniel Oh
CSCI 135
Genady Maryash
Project 3 Task B
*/

#include <iostream>
#include <string>
#include "Bank.hpp"
#include "Account.hpp"
using namespace std;


Bank::Bank(){
    count = 0;
}

std::string Bank::createAccount(std::string fname, std::string lname, std::string new_pin){
    if(count < 200){
        Accounts[count] = Account::Account(fname, lname, new_pin);
        count++;
        return Accounts[count - 1].getAccountNumber();
    }
    return "-1";
}

bool Bank::removeAccount(std::string acc_number){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number){
            Accounts[i] = Accounts[count - 1];
            count--;
            return true;
            }
        else{
            return false;
        }
        }
    return 0;
}



bool Bank::withdraw(std::string acc_number, std::string new_pin, int total){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == new_pin){
            if(Accounts[i].getBalance >= total){
                Accounts[i].transaction(-total);
                return true;
            }
        }
    }
    return -1;
}

bool Bank::deposit(std::string acc_number, std::string new_pin, int total){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == new_pin){
            return Accounts[i].transaction(total);
        }
    }
    return -1;
}


int Bank::getAccountBalance(std::string acc_number, std::string new_pin){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == new_pin){
            return Accounts[i].getBalance();
        }
    }
    return -1;
}
//try making variables from all files consistent
//private variables aren't getting recognized


/*
Daniel Oh
CSCI 135
Genady Maryash
Project 3 Task 2


#include <iostream>
#include <string>
#include "Bank.hpp"
#include "Account.hpp"
using namespace std;

Bank::Bank(){
    count = 0;
}

std::string Bank::createAccount(std::string fname, std::string lname, std::string pin_number){
    if(count < 200){ //attempt: manually setting each string of information
        Accounts[count] = Account(fname, lname, pin_number);
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
            for(int j = i; j < count - 1; j++){
                Accounts[j] = Accounts[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}



bool Bank::withdraw(std::string acc_number, std::string pin_number, int total){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin_number){
            if(Accounts[i].getBalance() >= total){
                Accounts[i].transaction(-total); //negative transaction
                return true;
            }
        }
    }
    return false;
}

bool Bank::deposit(std::string acc_number, std::string pin_number, int total){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin_number){
            Accounts[i].transaction(total); //positive transaction
        }
    }
    return false;
}


int Bank::getAccountBalance(std::string acc_number, std::string pin_number){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin_number){
            return Accounts[i].getBalance();
        }
    }
    return -1;
}


First name = fname
Last name = lname
Pin = pin_number
Account number = acc_number
Transaction amount = total
*/

Bank::Bank(){
    count = 0;
}

std::string Bank::createAccount(std::string fname, std::string lname, int pin_number){
    if(count == 200){
        return "-1";
    }
    Account Account(fname, lname, pin_number);
    Accounts[count] = Account;
    count++;
    return Account.getAccountNumber();
}

bool Bank::removeAccount(std::string acc_number){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number){
            for(int j = i; j < count - 1; j++){
                accounts[j] = accounts[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

bool Bank::withdraw(int total, std::string acc_number, int pin_number){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin_number){
                return accounts[i].transaction(-1 * total);
        }
    }
    return false;
}

bool Bank::deposit(int total, std::string acc_number, int pin_number){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin_number){
            return Accounts[i].transaction(total);
        }
    }
    return false;
}

int Bank::getAccountBalance(std::string acc_number, int pin_number){
    for(int i = 0; i < count; i++){
        if(Accounts[i].getAccountNumber() == acc_number && Accounts[i].getPin() == pin_number){
                return Accounts[i].getBalance();
        }
    }
    return -1;
}