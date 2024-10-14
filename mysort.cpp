// Name: Kenton La
// CECS 325-01
// Prog 3 - Sorting Contest
// Oct 14, 2024

// I certify that this program is my own original work. I did not copy any part of this program from any other source.
// I further certify that I typed each and every line of code in this program.

#include <iostream>
#include <fstream>
using namespace std;

void bubble(int A[], int size){

}

int main(int argc, char* argv[]){
    if (argc != 3){
        cout << "Please enter 2 parameters:\n";
        cout << "   Parameter 1: input file\n";
        cout << "   Parameter 2: output file\n";
        cout << "Example: ./mysort numbers.dat mysort.out\n";
        exit(EXIT_SUCCESS);
    }
    ofstream fout;
    ifstream fin;
    int n;
    int count = 0;
    fin.open(argv[1]);
    fout.open(argv[2], ios::out | ios::trunc);
    while (fin >> n){
        fout << n << endl;
        count++;
    }
    fout.close();
    fin.close();

    cout << count << " numbers sorted and transferred from " << argv[1] << " to " << argv[2] << endl;
    return 0;
}