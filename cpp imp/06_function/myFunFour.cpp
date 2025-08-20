#include <iostream>

using namespace std;

int hellooChai(){
 return 10;
}

int main(){
    
    //lamda
    auto preparedChai = [](int cups){
        cout << "Preparing " << cups << " cups of tea" << endl;
    };

    preparedChai(4);
    
    return 0;
}

// Function Overloading
// Define multiple functions with the same name but different parameters (number or type). The compiler selects the correct version based on the arguments.

// Default Arguments
// Allows parameters to have default values if none are provided in the call. 

// Inline Functions
// Suggests to the compiler to insert the function's code inline at compile-time, reducing call overhead for small, frequently-called functions. 