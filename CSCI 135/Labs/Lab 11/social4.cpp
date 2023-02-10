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

struct Post{
    string username;
    string message;
};

class Network {
private:
    static const int MAX_USERS = 20;
    int numUsers; 
    Profile profiles[MAX_USERS];
    bool following[MAX_USERS][MAX_USERS];  
    static const int MAX_POSTS = 100;         // new
    int numPosts;                             // new
    Post posts[MAX_POSTS];                    // new
    int findID (string usrn);
public:
    Network();
    bool addUser(string usrn, string dspn);
    bool follow(string usrn1, string usrn2);
    void printDot(); 
    bool writePost(string usrn, string msg);  // new
    bool printTimeline(string usrn);          // new
};

//default profile constructor for a user
Profile::Profile(){
    username = "";
    displayname = "";
}
//using private variables
Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}

//return username
string Profile::getUsername(){
    return username;
}

//return name in the desired formate: "displayname (@username)"
string Profile::getFullName(){
    return displayname + " (@" + username + ")";
}

//change the display name
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




//comments
//why !=
//haha
//more
//another one
//final one

//comments
//why !=
//haha
//more
//another one
//final one



bool Network::writePost(string usrn, string msg){
    int valid = findID(usrn);
    if(valid == -1){
        return false;
    }

    posts[numPosts].username = usrn;
    posts[numPosts].message = msg;
    numPosts++;
    return true;

}

bool Network::printTimeline(string usrn){ //reverse chronological
    int x = findID(usrn); //user
    if(x == -1){
        return false;
    }
    for(int i = numPosts - 1; i > -1; i--){
        Post postings = posts[i];
        int y = findID(postings.username); //posts
        if(postings.username == usrn){
            cout << profiles[x].getFullName() << ": " << postings.message << endl; 
        }
        else if(following[x][y]){
            cout << profiles[y].getFullName() << ": " << postings.message << endl;
        }
    }
    return true;
}

int main() {
  Network nw;
  // add three users
  nw.addUser("mario", "Mario");
  nw.addUser("luigi", "Luigi");
  nw.addUser("yoshi", "Yoshi");
   
  nw.follow("mario", "luigi");
  nw.follow("luigi", "mario");
  nw.follow("luigi", "yoshi");
  nw.follow("yoshi", "mario");

  // write some posts
  nw.writePost("mario", "It's a-me, Mario!");
  nw.writePost("luigi", "Hey hey!");
  nw.writePost("mario", "Hi Luigi!");
  nw.writePost("yoshi", "Test 1");
  nw.writePost("yoshi", "Test 2");
  nw.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw.writePost("mario", "My crazy plans always work!");
  nw.writePost("yoshi", "Test 3");
  nw.writePost("yoshi", "Test 4");
  nw.writePost("yoshi", "Test 5");

  cout << endl;
  cout << "======= Mario's timeline =======" << endl;
  nw.printTimeline("mario");
  cout << endl;

  cout << "======= Yoshi's timeline =======" << endl;
  nw.printTimeline("yoshi");
  cout << endl;
}
//more comment
// more
//more