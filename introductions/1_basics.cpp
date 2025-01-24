// 1. BASICS
// An introduction basic C++ concepts like variables, input/output, and functions (note: the two slashes are comments--not code!)

// ==============
// ++ Imports ++
// ==============

#include <iostream>  // This lets us use cout ("c-out", console output) and cin ("c-in", console input) for input/output
using namespace std;  // This lets us write 'cout' instead of 'std::cout'

// ==================
// ++ cout and cin ++
// ==================

// Clarifying what `cout` and `cin` are before we get into any of the business...
// For example, to output "What's your name?" to your console (terminal), you would write (in the context of a function, but this is just an example):
// cout << "What's your name? ";

// To accept an input response from your console (terminal), you would first define the variable `name` as a string, and write:
// string name;
// cin >> name;

// To which you could then respond with:
// cout << "Hello, " << name << "!"

// You'll see this in action further below...

// ===============
// ++ Functions ++
// ===============

// Function declaration - tells the compiler this function exists. Without this, the code will throw us an error:
// C++ reads code from top to bottom. When it sees `printWelcome()` in `main()` (right below), it says, "What's this? I've never heard of this function!"
// Even though the function exists later in the file, C++ doesn't know that yet! Unlike python, C++ is dumb (or "not baby proofed," if you ask Aiden).

void printWelcome(); // 'void' means the function doesn't return anything

// To restate--the declaration at the top is like telling C++: "Hey, trust me, there's going to be a function called `printWelcome` later in the code. It won't return anything (`void`) and it won't take any parameters."

// This is the main function - every C++ program 'starts' here (not literally because we had to do some preliminary housekeeping before, but you get the idea).
int main() {
    // Variables store data. Different types hold different kinds of data
    int age = 20;                // Whole numbers
    float height = 5.9;          // Decimal numbers (single precision)
    string name = "Student";     // Text
    bool isEnrolled = true;      // True/false values

    // Call our welcome function
    printWelcome();

    // Print to the console using cout
    cout << "What's your name? ";
    
    // Get input from the user using cin
    cin >> name;

    // We can combine text and variables when printing!
    cout << "Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old" << endl;

    return 0;  // Tell the system our program finished successfully c: yay
}

// Function definition - what the function actually does!
void printWelcome() {
    cout << "Welcome to C++ !" << endl;
    cout << "----------------" << endl;
}
