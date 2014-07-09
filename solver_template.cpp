#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::stringstream;
using std::string;

string problem_solver(const string& input){
    //logic ...
    return input;
}


int main(){
    string line;
    string result;
    stringstream sstr;

    ifstream inputfile;
    ofstream outputfile;
    inputfile.open("input.txt");
    outputfile.open("output.txt");

    //input
    cout << "input.txt" << endl;
    cout << "==========================" << endl;
    while( sstr << inputfile.rdbuf() );
    cout << sstr.str() << endl;
    inputfile.close();

    // logic
    result = problem_solver(sstr.str());

    // result
    cout << endl << "output.txt" << endl;
    cout << "==========================" << endl << result << endl;
    outputfile << result;
    return 0;
}
