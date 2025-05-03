#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout; // Output file stream
    ifstream fin;  // Input file stream

    fout.open("sample.txt");
    fout << "Hello, stream classes!";
    fout.close();

    string text;
    fin.open("sample.txt");
    getline(fin, text);
    cout << "Read from file: " << text << endl;
    fin.close();

    return 0;
}
