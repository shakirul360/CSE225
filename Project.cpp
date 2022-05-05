#include <bits/stdc++.h>
#include <iostream>
#include <string>
//#include <boost/algorithm/string.hpp>

using namespace std;

int fin_arr[200][200];
int word_count = 0;
int sentence_count = 0;
string words[200];
int i;

bool found = false;

int main(){

    string line;
    string word;

    string filename("input.txt");

    ifstream input_file(filename);
    if (!input_file.is_open()) {
        cerr << "Could not open the file - '" << filename << "'" << endl;
        return EXIT_FAILURE;
    }

    while (getline(input_file, line, '.')){
        istringstream ss(line);
        //cout << line << endl;

        while (ss >> word){
            //cout << word << endl;
            word.erase(std::remove(word.begin(), word.end(), ','), word.end());

            std::for_each(word.begin(), word.end(), [](char & c) {
                c = ::tolower(c);
            });

            cout << word << endl;
            for (i = 0; i < word_count; i++){
                if (words[i] == word){
                    found = true;
                    break;
                }
            }
//            if (word_count == 0){
//                words[0] = word;
//                fin_arr[sentence_count][0] = 1;
//                word_count++;
//            }
            if (found){
                fin_arr[sentence_count][i] += 1;
                found = false;
            } else {
                words[word_count] = word;
                fin_arr[sentence_count][word_count] = 1;
                word_count++;
            }
        }
        sentence_count++;
    }



    input_file.close();
    cout << "Sentences in essay - " << sentence_count << endl;
    cout << "Unique words in essay - "<< word_count << endl;

    ofstream myfile;
    myfile.open("output.txt");


    myfile << "\t";
    for (i = 0; i < word_count; i++){
        myfile << words[i] << "\t";
    }
    myfile << endl;

    for (int i = 0; i < sentence_count; i++){
        myfile << i << "\t";
        for (int j = 0; j < word_count; j++){
            myfile << fin_arr[i][j] << "\t";
        }
        myfile << endl;
    }

    myfile.close();

}


//
//    while (getline(cin, str, '.')){
//        istringstream ss(str);
//        sentence_count++;
//        while (ss >> word){
//            word.erase(std::remove(word.begin(), word.end(), ','), word.end());
//            cout << word << " ";
//        }
//        cout << endl;
//
//
//    }
