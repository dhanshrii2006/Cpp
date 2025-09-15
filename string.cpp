
#include <iostream>      // Include for input/output stream (cout, endl)
#include <algorithm>     // Include for std::reverse algorithm
#include <string>        // Include for std::string class

int main() { // Main function: program execution starts here
	std::string s = "hello"; // Declare a string variable 's' and initialize it with "hello"
	std::reverse(s.begin(), s.end()); // Reverse the string 's' in place using std::reverse
	std::cout << s << std::endl; // Output the reversed string followed by a newline
	return 0; // Return 0 to indicate successful execution
}
