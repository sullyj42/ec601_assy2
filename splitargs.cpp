
// Jeremiah Sullivan copyright jpsulliv@bu.edu


// Name of program mainreturn.cpp 
#include <iostream> 
using namespace std; 

int main(int argc, char** argv) 
{ 
    for (int i = 1; i < argc; ++i) 
        if (i < 6)
          cout << argv[i] << '\n'; 
        else 
          cerr << argv[i] << '\n';

    return 0; 
} 