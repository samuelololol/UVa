#include <iostream>
#include <fstream>
#include <string>
#include <sstream>


std::string problem_solver(const std::string& input){
    //logic ...
    std::string result = input;

    return result;
}


int main(){
    std::string line;
    std::string result;
    std::stringstream sstr;

    //input
    std::cout << "input.txt" << std::endl;
    std::cout << "==========================" << std::endl;

    std::ifstream inputfile;
    inputfile.open("input.txt");
    while(sstr << inputfile.rdbuf());
    std::cout << sstr.str() << std::endl;
    inputfile.close();

    // logic
    result = problem_solver(sstr.str());

    // result
    std::cout << std::endl << "output.txt" << std::endl;
    std::cout << "==========================" << std::endl;
    std::cout << result << std::endl;

    std::ofstream outputfile;
    outputfile.open("output.txt");
    outputfile << result;
    outputfile.close();

    return 0;
}
