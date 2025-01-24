#include <iostream>
using namespace std;

int main() {
    // --- Stack Memory Example ---
    cout << "Stack Memory Example:" << endl;
    int stackVar = 10; // Allocated on the stack
    cout << "Value of stackVar: " << stackVar << endl;
    cout << "Address of stackVar: " << &stackVar << endl;

    // --- Heap Memory Example ---
    cout << "\nHeap Memory Example:" << endl;
    int* heapVar = new int(20); // Allocated on the heap
    cout << "Value of heapVar: " << *heapVar << endl; // Dereference to get value
    cout << "Address of heapVar (on the heap): " << heapVar << endl;

    // Modifying heap memory
    *heapVar += 10; // Modify the value stored in heap memory
    cout << "Modified value of heapVar: " << *heapVar << endl;

    // Cleaning up heap memory
    delete heapVar; // Free the allocated memory
    heapVar = nullptr; // Avoid dangling pointers
    cout << "Heap memory cleaned up.\n";

    // --- Demonstrating Stack Lifetime ---
    cout << "\nStack Lifetime Example:" << endl;
    {
        int tempVar = 50; // Temporary variable in a local scope (stack)
        cout << "Value of tempVar: " << tempVar << endl;
        cout << "Address of tempVar: " << &tempVar << endl;
    } // tempVar goes out of scope here and is destroyed

    // Uncommenting the following line will cause an error because tempVar no longer exists
    // cout << "Trying to access tempVar: " << tempVar << endl;

    // --- Common Mistakes with Heap Memory ---
    cout << "\nCommon Mistakes with Heap Memory:" << endl;
    int* memoryLeak = new int(100); // Allocated on the heap
    cout << "Value of memoryLeak: " << *memoryLeak << endl;

    // Forgetting to delete memoryLeak will cause a memory leak
    delete memoryLeak; // Always free memory to avoid memory leaks
    memoryLeak = nullptr; // Best practice to avoid dangling pointers

    return 0;
}

