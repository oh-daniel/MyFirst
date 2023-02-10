/*
Daniel Oh
CSCI 135
Genady Maryash
Project 2 
This program indents a paragraph and outputs the text in a user-specified output file.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main(){
    //extract file info from user
    cout << "Enter input file: ";
    string file_name;
    cin >> file_name;
    ifstream in_file;
    in_file.open(file_name);
    if(in_file.fail()){
        cerr << "File cannot be opened.";
        exit(1);
    }
    string line;
    
    //extract the size and the text file specified output file name
    getline(in_file, line);
    bool split = false; // split when we encounter a semicolon
    string s_width = ""; 
    string empty = ""; //our output file name
    for(int i = 0; i < line.size(); i++){
        if(split == true){
            empty += line[i];
        }
        else if (line[i] == ';'){
            split = true;
        }
        else{
            s_width += line[i];
        }
    }
    
    //covert the string width into an integer
    string fileline;
    int width = stoi(s_width); //stoi turns string into an integer
    empty = empty.substr(0, empty.size() - 1); //eliminate ending ';' on the filename

    // begin to extract and output data in our output file
    ofstream outfile; 
    outfile.open(empty);
    int overchar = 0;
    int countchar = 0;
    bool newline = false; //should we make a newline?
    while(getline(in_file, fileline)){
        if(fileline.size() == 0){ //if our line is empty, which we have between paragraphs
            newline = true;
            overchar = 0;
        }
        if(newline == true){ //if our bool value is true
            outfile << endl; 
            newline = false;
        }
        if(fileline.size() + overchar < width){ //if the size of our line and the overflow is less than width (60)
            outfile << fileline;
            overchar = 0;
            newline = true;
        }
            else{
            string word;
            istringstream iss(fileline); //seperate into words
            countchar = overchar;
            while (iss >> word){
                if(countchar == 0){
                    outfile << word;
                    countchar = word.size();
                }
                else if(countchar + word.size() + 1 < width){ // +1 accounts for spaces
                    outfile << " " << word;
                    countchar += word.size() + 1;
                }
                else{
                    outfile << endl;
                    outfile << word;
                    countchar = word.size();
                }
            }
            overchar = countchar;
            }
    }   
}