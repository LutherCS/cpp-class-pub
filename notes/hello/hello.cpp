/*
 * This is a multiline comment
 */

/*
 * #include allows you to include standard libraries and 3rd-party modules
 */
#include <iostream>  // This is an end-of-the-line comment

/*
 * This is the main function
 * int means it is supposed to return an integer value but it's not required for the main function
 */ 
int main() {  // Curly braces mark the beginning and the end of a block
    // Here is an output statement. cout is the standard output (console)
    std::cout << "Hello World";  // Don't forget the semicolon at the end of each statement
}  // End of the main function

/*
 * Compile the program
 * g++ hello.cpp -o hello.out
 * Run this program
 * ./hello.out
 */
