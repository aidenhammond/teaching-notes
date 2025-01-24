// 4. FUNCTIONS
// Functions, in greater depth.

#include <iostream>
using namespace std;

// Let's define a function that takes parameters and returns a value:
int add(int a, int b) { // The function returns an integer and accepts two integers--a and b.
    return a + b;
}

// Let's define a function that modifies a parameter.
void doubleNumber(int& num) {  // The '&' means we can change the original value of the integer variable 'num'.
    num = num * 2;
}

int main() {
    // Using the add function:
    int sum = add(5, 3);
    cout << "5 + 3 = " << sum << endl;

    // Using the doubleNumber function:
    int value = 10;
    cout << "Original value: " << value << endl;
    
    doubleNumber(value);
    cout << "After doubling: " << value << endl;

    return 0;
}
