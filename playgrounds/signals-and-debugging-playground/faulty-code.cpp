#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

// Signal handler function
void signalHandler(int signal) {
    cout << "Caught signal: " << signal << endl;

    if (signal == SIGINT) {
        cout << "Interrupt signal (SIGINT) received. Cleaning up and exiting gracefully..." << endl;
        exit(0);
    } else if (signal == SIGSEGV) {
        cout << "Segmentation fault (SIGSEGV) detected! Exiting..." << endl;
        exit(1);
    }
}

// Function to demonstrate a segmentation fault
void causeSegmentationFault() {
    int* ptr = nullptr; // Null pointer
    cout << "Attempting to dereference a null pointer..." << endl;
    *ptr = 42; // This will cause a segmentation fault
}

// Function to create an infinite loop (can be interrupted with Ctrl+C)
void infiniteLoop() {
    cout << "Entering an infinite loop. Use Ctrl+C to interrupt." << endl;
    while (true) {
        cout << "Looping..." << endl;
        sleep(1);
    }
}

int main() {
    // Register signal handlers
    signal(SIGINT, signalHandler);   // Handle Ctrl+C (SIGINT)
    signal(SIGSEGV, signalHandler); // Handle segmentation fault (SIGSEGV)

    int choice;
    cout << "Choose an option:\n";
    cout << "1. Cause a segmentation fault\n";
    cout << "2. Enter an infinite loop\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        causeSegmentationFault();
    } else if (choice == 2) {
        infiniteLoop();
    } else {
        cout << "Invalid choice. Exiting..." << endl;
    }

    return 0;
}

