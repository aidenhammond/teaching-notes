// Control Flow
// Basic intro to controlling program flow with `if` statements and loops

#include <iostream> // again: for cin and cout
using namespace std; // again: to avoid writing std::cin and std::cout

// =================================================
// ++ Implementing If/Else Statements & Loops ++
// =================================================

// Remember what we said about `main` functions from last time? This is where the utility begins. 
// We'll be addressing the implementation/structure of different conditional actions through this function...

int main() {
    int grade; // First, we must define the variable `grade` as an integer. We'll let the user input a value themselves, so we won't specify the value of `grade`.
    
    // Next, we ask the user for their grade:
    cout << "What grade did you get? "; // printing "What grade did you get?" to the console
    cin >> grade;                       // Taking a user-input integer as input

    // Now, we use if-statements to check the grade the user entered:
    if (grade >= 90) {                   // If the user's grade is greater than/equal to a 90...
        cout << "You got an A!" << endl; // They got an A!
    } 
    else if (grade >= 80) {              // Else, if they didn't get >=90, we check if they got >= an 80:
        cout << "You got a B!" << endl;  // And if they did, they got a B!
    }
    else {                              // Else, they didn't get either of those, we tell them to keep studying. Sorry!
        cout << "Keep studying!" << endl;
    }

    return 0; // We say `return 0;` to tell the operating system that our program finished successfully if it's read this far.
}

// What if our program didn't finish successfully? What would that look like? Here's an example (I've commented out):
/* (the forward slash & asterisk indicate a multi-line comment, by the way)
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    if (age < 0) {
        cout << "Error: Age can't be negative!" << endl;
        return 1;  // Tell OS something went wrong
    }
    
    cout << "You are " << age << " years old" << endl;
    return 0;  // Tell OS everything worked fine! Yay!
}
*/ 
