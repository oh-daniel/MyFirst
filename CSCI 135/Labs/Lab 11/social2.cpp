/*
Daniel Oh
Genady Maryash
CSCI 135
Lab 11 Task B
This program implements the Network class, which allows us to add new users to the network,
implement a following system, and a posting messages system.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Profile {
private:
    string username;
    string displayname;

public:
Profile(string usrn, string dspn);
Profile();
string getUsername();
string getFullName();
void setDisplayName(string dspn);
};

class Network {
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];
    int findID (string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);

};


Profile::Profile(){
    username = "";
    displayname = "";
}

Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}


string Profile::getUsername(){
    return username;
}

string Profile::getFullName(){
    return displayname + " (@" + username + ")";
}

void Profile::setDisplayName(string dspn){
    displayname = dspn;
}


int Network::findID (string usrn){
    for(int i = 0; i < MAX_USERS; i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }
        else{
            return -1;
        }
    }
    return 0;
}

Network::Network(){
    numUsers = 0;
}


bool Network::addUser(string usrn, string dspn){
    for(int i = 0; i < usrn.size(); i++){
        if(!isalnum(usrn[i])){
            return false;
        }
    }
    if(usrn == "" || numUsers == MAX_USERS || findID(usrn) != -1){
        return false;
    }
    else{
        Profile profile(usrn, dspn); //create a profile with the username and displayname
        profiles[numUsers] = profile; //in the profiles array, add the profile
        numUsers++; //increment
        return true;
    }
}


int main() {
    Network nw;
    cout << nw.addUser("mario", "Mario") << endl;     // true (1)
    cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

    cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
    cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
    cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

    for(int i = 2; i < 20; i++)
        cout << nw.addUser("mario" + to_string(i), 
                "Mario" + to_string(i)) << endl;   // true (1)

    cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}

//comments
//why !=
//haha
//more
//another one
//final one