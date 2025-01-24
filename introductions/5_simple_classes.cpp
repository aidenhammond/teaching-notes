// 5. CLASSES
// Introducing a basic class before moving to inheritance!

#include <iostream>
#include <string>
using namespace std;

// A class combines related data and functions:
class Student {
private:  // Private members can only be accessed within the class.
    string name;
    int grade;

// Think of private members like money in a bank:
// You know it's there, you can have the teller alter the amount of money in your bank account, but you can't actually get your hands on the physical cash yourself.
// Now, extend that analogy to members--these members can be data or functions; you can create public members that can access these private members, but you cannot access the private members explicitly.
// Let's think of this even more practically:
    // Let's say you're creating simulation software for some astrophysical phenomenon, like a solar system.
    // This software requires a user to set inputs, e.g. number of planets, planet mass, planet radii.
    // You may want to keep these input parameters private; they are variables used in a series of extensive and complicated orbital calculations, and altering them explicitly could throw off your entire code!
    // Ideally, you would create a public function that prompts a user, "How many planets do you want in your system?" which includes error handling and interfacing, preventing a user from setting "number of planets," an integer, to a string (or other similar stuff).

public:   // Public members can be accessed from outside the class.
    // This is a Constructor; it is called when creating a new Student
    Student(string studentName, int studentGrade) {
        name = studentName;
        grade = studentGrade;
    }
    // A constructor is a special member function of a class that is automatically called when an object of that class is created:
    // Constructors are methods that are automatically executed every time you create an object. 
    // The purpose of a constructor is to construct an object and assign values to the object's members.

    // Member functions (methods)
    void printInfo() {
        cout << "Student: " << name << endl;
        cout << "Grade: " << grade << endl;
    }

    void improveGrade() {
        grade += 5;
        if (grade > 100) grade = 100;
    }
};

// Here is our main function: can you figure out what the inputs and outputs would be?
int main() {
    // Create a new Student object
    Student student1("Alex", 85);
    
    // Use the object's functions
    cout << "Initial info:" << endl;
    student1.printInfo();

    student1.improveGrade();
    cout << "\nAfter improving grade:" << endl;
    student1.printInfo();

    return 0;
}
