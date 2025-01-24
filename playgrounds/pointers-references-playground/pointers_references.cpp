#include <iostream>
using namespace std;

// Function that uses a pointer to modify a value
void modifyWithPointer(int* ptr) {
    *ptr += 10; // Dereference the pointer to modify the value it points to
}

// Function that uses a reference to modify a value
void modifyWithReference(int& ref) {
    ref += 20; // Directly modify the referenced value
}

int main() {
    int number = 42;

    // Print the initial value of the variable
    cout << "Initial value of number: " << number << endl;

    // Using pointers
    int* ptr = &number; // Pointer stores the address of 'number'
    cout << "Pointer address: " << ptr << endl;
    cout << "Value via pointer: " << *ptr << endl; // Dereference to get the value

    // Modify the value using a pointer
    modifyWithPointer(ptr);
    cout << "Value after modifyWithPointer: " << number << endl;

    // Using references
    int& ref = number; // Reference is an alias for 'number'
    cout << "Reference value: " << ref << endl;

    // Modify the value using a reference
    modifyWithReference(ref);
    cout << "Value after modifyWithReference: " << number << endl;

    // Comparing pointers and references
    cout << "\n--- Comparing Pointers and References ---\n";
    cout << "Pointer (can be reassigned):\n";
    int anotherNumber = 100;
    ptr = &anotherNumber; // Pointer can point to a different variable
    cout << "Pointer now points to anotherNumber, value: " << *ptr << endl;

    cout << "Reference (cannot be reassigned):\n";
    // Uncommenting the next line would cause a compilation error
    // ref = &anotherNumber; // ERROR: References cannot be reassigned

    return 0;
}

