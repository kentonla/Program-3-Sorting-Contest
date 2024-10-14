// Name: Kenton La
// CECS 325-01
// Prog 3 - Sorting Contest
// Oct 14, 2024

// I certify that this program is my own original work. I did not copy any part of this program from any other source.
// I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <fstream>
#include <ctime> 
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]){
    if (argc != 4){
        cout << "Please enter 3 parameters:\n";
        cout << "   Parameter 1: total count of numbers you want.\n";
        cout << "   Parameter 2: min value\n";
        cout << "   Parameter 3: max value\n";
        cout << "Example: $ generate 1000000 100000 999999\n";
        exit(EXIT_SUCCESS);
    }
    for (int i = 0; i < argc; ++i) {
        cout << "argv["<< i << "]: " << argv[i] << endl;
    }

    int COUNT = stoi(argv[1]);
    int MIN = stoi(argv[2]);
    int MAX = stoi(argv[3]);

    srand(time(0));
    ofstream fout;
    fout.open("numbers.dat", ios::out);

    for (int j = 0; j < COUNT; j++){
        fout << (rand() % (MAX-MIN+1) + MIN) << endl;
    }

    fout.close();
    return 0;
}