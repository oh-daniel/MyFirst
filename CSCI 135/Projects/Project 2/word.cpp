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

    int width = stoi(s_width);
    empty = empty.substr(0, empty.size() - 1);
    ofstream outfile;
    outfile.open(empty);
    
    string word;
    string new_text = "";
    int count = 0;
    while(getline(in_file, line)){ //for each line
        if(count + line.size() < width){ //
            outfile << line << " ";
            outfile << endl;
        }
        
        else{
            istringstream iss(line);
            string word;
        

            while(getline(iss, word, ' ')){ // for each word in line
                if(word.size() + count < width){ // if less than width
                    outfile << word << " ";
                    count = count + (word.size() + 1);
                }
                else if(word.size() + count == width){ // if equal to width
                    count = 0;
                    outfile << endl;
                    outfile << word << " ";
                    count = count + (word.size() + 1);
                    }   
                else if(word.size() + count > width){ // if greater than width
                    outfile << endl;
                    count = 0;
                    outfile << word + " ";
                    count = count + (word.size() + 1);
                }
            }

        }
        if(line.size() == 0){
            outfile << endl;
            count = 0;
        }
    }
   
}













    