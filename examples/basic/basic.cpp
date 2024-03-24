// Hello world that explains the basic structure of a C++ program using detailed comments.

// Preprocessor directive that includes the iostream library.
#include <iostream>

// The main function is the entry point of a C++ program. It is required in every C++ program.
int main() {
    // std::cout is used to display output to the standard output device (usually the console).
    // The << operator is used to insert the string "Hello, World!" into the std::cout object.
    // std::endl is used to insert a newline character and flush the output buffer.
    std::cout << "Hello, World!" << std::endl;

    // The return statement is used to return a value from the main function.
    // A return value of 0 indicates that the program terminated successfully.
    return 0;
}

// To compile this program, you can use the following command:
// g++ basic.cpp -o basic
// This will create an executable file named "basic" that you can run using:
// ./basic

// To run this program, you can also use an online compiler such as https://www.onlinegdb.com/online_c++_compiler

// Output:
// Hello, World!

// Explanation of the code:
// 1. The program starts with the preprocessor directive #include <iostream>, which includes the iostream library.
// 2. The main function is the entry point of the program and is required in every C++ program.
// 3. Inside the main function, std::cout << "Hello, World!" << std::endl; is used to display the message "Hello, World!" to the console.
// 4. The return 0; statement is used to indicate that the program has terminated successfully.
// 5. When the program is compiled and run, it will display the output "Hello, World!" to the console.

// Note: Comments in C++ are indicated by // for single-line comments and /* */ for multi-line comments.

// Reference: https://www.programiz.com/cpp-programming/examples/print-sentence

// The above program can be written in a more concise form as follows:
// #include <iostream>

// int main() {
//    std::cout << "Hello, World!" << std::endl;
    //return 0;
//}
