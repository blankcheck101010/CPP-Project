// a preprocessor directive
#include <iostream>  // includes a FILE that we'll need later on

// std = standard library
using namespace std;  // includes a LIBRARY that we'll need later on

// a function
int main()  // c++ always starts with the main function
// a function starts with the datatype. In this case (int)
{
    // statements (aka instructions)
    // each statement ends with semicolons
    cout << "Hello World!" << endl;  //cout = output stream object
                                     //endl = endline (or go to next line)
    // main should always return 0 (tells program it ran fine without errors)
    return 0;
}