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
    bool following[MAX_USERS][MAX_USERS];
public:
    Network();
    bool addUser(string usrn, string dspn);
    bool follow(string usrn1, string usrn2);
    void printDot();

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


int Network::findID(string usrn){
    for (int i = 0; i < numUsers; i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }   
    }
        return -1; //not with an else statement
}

Network::Network(){
    numUsers = 0;
    for(int i = 0; i < MAX_USERS; i++){
        for(int j = 0; j < MAX_USERS; j++){
            following[i][j] = false;
        }
    }
}


bool Network::addUser(string usrn, string dspn){
    if(usrn == "" || numUsers == MAX_USERS || usrn.size() == 0){
        return false;
    }
    for(int j = 0; j < usrn.size(); j++){
        if(!isalnum(usrn[j])){
            return false;
        }
    }
    Profile new_profile(usrn, dspn);
    profiles[numUsers] = new_profile;
    numUsers++;
    return true;
}  



bool Network::follow(string usrn1, string usrn2){
    if(findID(usrn1) == -1 || findID(usrn2) == -1){
        return false;
    }
    following[findID(usrn1)][findID(usrn2)] = true;
    return true;
}

void Network::printDot(){
    cout << "digraph {" << endl;
    for(int i = 0; i < numUsers; i++){
        cout << " " << "\"@" << profiles[i].getUsername() << "\"" << endl;
    }


    for(int i = 0; i < numUsers; i++){
        for(int j = 0; j < numUsers; j++){
            if(following[i][j] == true){
                cout << " " << "\"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[j].getUsername() << "\"" << endl;
            }
        }
    }
    cout << "}";
}


int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}


//comments
//why !=
//haha
//more
//another one
//final one