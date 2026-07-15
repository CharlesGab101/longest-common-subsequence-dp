#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "find_lcs_.cpp"

using namespace std;


int main (){

    std::string input;

    cout << "======Welcome Target Course Codes and Substrings=======" << endl;

    cout << "Proceed to read in4b.txt file? Yes or No:  ";
    while (true) {
        if(cin >> input) {
            break; 
        } else {
            std::cout << "Invalid Input! Try Again\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(9999, '\n');
        }
    }
    // you need char to read all the letters 
    for (char &c : input) {
        c = (char)std::tolower(c);
    }

    if (input == "yes") {

    } else {
        return 0;
    }
    // open file 
    ifstream input_file("in4b.txt");
    if (!input_file.is_open()) {
        cerr << "Error: Could not open in4b.txt" << endl;
        return 1;
    }

    string input_A;
    string input_B;
    int c = 1;

    while(getline(input_file, input_A)) {
        if (getline(input_file, input_B)) {
        } else {
            cerr << "Error: Missing second line for pair " << c << endl;
            break;
        }
    cout << endl;
    std::cout << "======Input "<< c << "======" << std::endl;
    cout << endl;
    vector<string> input_string_A;
    vector<string> input_string_B;

    find_lcs(input_A, input_B);
    c++;
    }

    return 0;
}