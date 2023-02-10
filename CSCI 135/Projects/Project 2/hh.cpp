#include <iostream>
using namespace std;
#include <fstream>
#include <sstream>

int main(){


    cout << "Enter input file: " << endl;
    string filename;
    cin >> filename;

    ifstream in_file;
    in_file.open(filename);

    string line;
    getline(in_file, line);

    //line equals 60;output.txt  separate them

// istringstream strm
//strm.str("60; output.txt");

//char line[60];
//60; output.txt;

// string = endLine
//    if(line.length() + overflow_count < width){
//        ofstrm << line;
//        overflow_count = 0;
//        endLine = true;
//    }

        //open output file for writing
        //        string word = "";
    //convert w to int


//2 while loops

    string char_count;
    string overflow_count;
    string ofstrm;

    char_count = overflow_count;
    bool reached_semi = false;
    string w =""; //width
    string t = "";
    for(int i=0; i<line.length(); i++) {
        if (reached_semi == true) {
            t += line[i];
        }
        else if (line[i] == ';') {
            reached_semi = true;
        }
        else {
            w += line[i];
        }
    }


//t.pop_back();

//i already max width
//t holds name of output file
//offstream is where all strings go in

    //write everything in reformatted way
    //open file that I'm going to write into
    //input there should be one space

    string file_line;
    int width = stoi(w);
    t.pop_back();
    ofstream outfile;
    outfile.open(t);

    //p account 2 characters accounts
    //1 is extra and the other is something
    //
    //keeping count of char numbers that go above 60
    int char_extra = 0;
    // keeps track in general
    int char_per_line = 0;

    bool new_line = false;
    while(getline(in_file, file_line)) {
        //in_file is object of string ifstream

        if (file_line.length() == 0) {
            new_line = true;
            char_extra = 0;
        }
        if (new_line == true) {
            outfile << '\n'; // << endl;
            new_line = false;
        }
        if (file_line.length() + char_extra < width) {
            outfile << file_line;
            char_extra = 0;
            new_line = true;
        }

//        (char_count = overflow){

            else {
            string word;
            istringstream iss(file_line);
            char_per_line = char_extra;
            //string stream iss(line);


            while (iss >> word) {
                if (char_per_line == 0) {
                    outfile << word;
                    char_per_line = word.length();
                }
                else if (char_per_line + word.length() + 1 < width) {
                    outfile << " " << word;
                    char_per_line += word.length() + 1;
                }
                else {
                    outfile << endl;
                    outfile << word;
                    char_per_line = word.length();
                }
            }
            char_extra = char_per_line;
        }

//       in_file.close();
    }
}



//            overflow = char_count;
//process extra line at beginning

//                    string word;
//                    while (iss >> word) {
//                        //go through each word
//                        if (char_count==0){
//                            out_file << word;
//                            char_count = word.length();
//                        }
//                        //no overflow
//                        else if (char_count + word.length() +1 < width) {
//                            outfile << " " << word;
//                            char_count = word.length() + 1;
//                        }
//                        else {
//                            outfile << "/n";
//                            outfile << word;
//                            char_count = word.length();
//                        }
//                    }
//                    overflow = char_count;
//                    in_file.close();
//                }
//            }
//        }
//    }
//    return 0;
//}




//google search

//
//    string o_ file;
//    string = string.substr(0, text.length()-1);
//


//    if (break){
//        while (getline(in_file, line)){
//            if(line.length() < 1){
//                while(getline(in_file, line)){
//                    if (line.length()<1){
//                        out_file << "/n" << "/n";
//                        overflow = 0;
//                    }
//                    else if (line.length() + overflow <= w){
//                        outfile << line << endl;
//                    }
//                    else {
//                        ofstream outfile (60, line);
//                    }
//                }












//maxwidth = stoi (line. getline (0,1)


// function reads line by line
//


////    if(line.length() + overflow_count + width)
////    {
////        ofstrm << line;
////        overflow_count = 0;
////        endLine = true;
////    }
////    else
////    {
////        char_count = overflow_count;
////
////    }
//
//