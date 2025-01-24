#include <iostream>
#include <string>
using namespace std;

/**
 * @brief A function template for adding two values.
 * 
 * This function works with any type that supports the `+` operator.
 * 
 * @tparam T The type of the input values.
 * @param a The first value to add.
 * @param b The second value to add.
 * @return T The sum of `a` and `b`.
 */
template <typename T>
T add(T a, T b) {
    return a + b;
}

/**
 * @brief A class template that represents a simple Pair.
 * 
 * The Pair class stores two values of (potentially) different types.
 * 
 * @tparam T1 The type of the first value.
 * @tparam T2 The type of the second value.
 */
template <typename T1, typename T2>
class Pair {
private:
    T1 first; ///< The first value in the pair.
    T2 second; ///< The second value in the pair.

public:
    /**
     * @brief Constructor to initialize the pair.
     * 
     * @param f The first value.
     * @param s The second value.
     */
    Pair(T1 f, T2 s) : first(f), second(s) {}

    /**
     * @brief Get the first value.
     * 
     * @return T1 The first value.
     */
    T1 getFirst() const {
        return first;
    }

    /**
     * @brief Get the second value.
     * 
     * @return T2 The second value.
     */
    T2 getSecond() const {
        return second;
    }

    /**
     * @brief Prints the pair to the console.
     */
    void print() const {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};

int main() {
    // Demonstrating function template
    cout << "Function Template Example:" << endl;
    cout << "add<int>(10, 20): " << add<int>(10, 20) << endl;
    cout << "add<double>(5.5, 3.3): " << add<double>(5.5, 3.3) << endl;
    cout << "add<string>(\"Hello, \", \"World!\"): " << add<string>("Hello, ", "World!") << endl;

    // Demonstrating class template
    cout << "\nClass Template Example:" << endl;
    Pair<int, string> myPair(1, "Template");
    myPair.print();

    Pair<double, double> anotherPair(3.14, 2.71);
    anotherPair.print();

    return 0;
}

