/*
Daniel Oh
CSCI 135
Genady Maryash
Project 2 Task A
This program edits an input text file to set the width of the line for a new output document
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;




int main(){
    string line;
    ifstream fin;
    ofstream outfile;
    string in_file;
    int i;
    cout << "Enter the input filename: "; 
    cin >> in_file;
    fin.open(in_file);
    if(fin.fail()){
        cerr << "File cannot be opened.";
        exit(1);
    }
    int width;
    string out_file;
    fin >> width >> out_file; // width: 60 , file name : ;output.txt;
/*
    cout << "Width: " << width << endl;
    cout << "Output file name: " <<  out_file << endl;
    
    cout << "Now it's: " << out_file << endl; // Now it's width : 60 , file name: output.txt
*/
    out_file = out_file.substr(1, out_file.size() - 2);

    
    string word;
    string new_text = "";
    int count = 0; 
    while(getline(fin, line)){ //for each line
        istringstream iss(line);
        string word;
        while(getline(iss, word, ' ')){ // for each word in line
            if(word.size() + count < width){
                cout << word << " ";
                count = count + (word.size() + 1);
            }
            else if(word.size() + count == width){
                cout << word;
                cout << endl;
                count = 0;
                }
            else if(word.size() + count > width){
                    cout << endl;
                    count = 0;
                    cout << word + " ";
                    count = count + (word.size() + 1);
            }
        }  
        if(count + line.size() < width){
            cout << endl;
            cout << endl;
            count = 0;
        }
    }

 


    return 0;
}