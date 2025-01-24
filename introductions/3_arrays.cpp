// 3. ARRAYS 
// Here, we cover arrays and basic array operations!

#include <iostream>
using namespace std;

int main() {
    // Arrays store multiple values of the same type:
    int scores[5] = {85, 92, 78, 90, 88};  // For instance, this is an array of 5 integers
    
    // We can print all scores using a loop.
    // Here's the verbal syntax before we actually hash it out in code:

    // "for an integer i ranging from 0 to 4 (less than 5), incrementing by 1 every time..."
    // "print "Student i+1: scores[i]"

    // "Why are we adding 1 to the number next to 'Student,' but using the regular number for 'scores'?"
        // We do this so that we can start at '1' when indexing students, while still grabbing the first number in the array.
        // If we didn't use i+1 for students and instead wrote `Student (i)`, we would end up printing "Student 0: 85"!
        // While there's technically nothing wrong with this, in 'the real world,' we usually count starting from 1: 1 apple, 1 banana, 1 computer, etc.
        // Meanwhile, the code still considers the number `85` in our array of scores to be the 0th entry.
        // So, a user who didn't write the program only really needs to know that the first number in the array, the `0th` entry, is associated with Student 1.

    cout << "Student scores:" << endl; 
    for (int i = 0; i < 5; i++) {                                   
        cout << "Student " << (i+1) << ": " << scores[i] << endl;   
    }

    // Now we can calculate the average of our scores!
    int sum = 0; // Initializing the integer variable 'sum' as 0,                
    for (int i = 0; i < 5; i++) { // Same loop as before...
        sum += scores[i];  // Add each score to sum!
    }
    float average = sum / 5.0; // And then define a new floating point variable, 'average,' as 'sum' divided by 5.
    
    cout << "Average score: " << average << endl;

    return 0;
}
