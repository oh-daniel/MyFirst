//Daniel Oh Quiz 11
//Assumes withdrawal is a positive amount
#include <iostream>
using namespace std;

class Money{
    public:
        int dollars;
        int cents;
};

Money withdraw_money(Money balance, Money withdrawal){   
    while(withdrawal.cents > balance.cents){
        withdrawal.cents = withdrawal.cents - 100;
        balance.dollars = balance.dollars - 1;
    }
    balance.dollars = balance.dollars - withdrawal.dollars;
    balance.cents = balance.cents - withdrawal.cents;
    if(withdrawal.dollars > balance.dollars){
        balance.dollars = 0;
        balance.cents = 0;
    }
    return balance;


}

int main(){
    Money starting = {100, 00};
    Money withdrawal = {2, 75};
    Money ending = withdraw_money(starting, withdrawal);
    cout << "$" << ending.dollars << "." << ending.cents << endl;
}
