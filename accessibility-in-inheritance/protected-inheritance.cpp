// C++ program to demonstrate the working of protected inheritance

#include <iostream>
using namespace std;

class Base {
	private:
		int pvt = 1;

	protected:
		int prot = 2;

	 public:
		int pub = 3;

		// function to access private member
		int getPVT() {
			return pvt;
		}
};

/**
 * NOTE: We have inherited it as "protected" and thus accessible
 * attributes of base (only prot and pub) are inherited as protected.
 **/

class ProtectedDerived : protected Base {
	public:
		// function to access protected member from Base
		int getProt() {
			return prot;
		}

		// function to access public member from Base
		int getPub() {
			return pub;
		}
};

int main() {
	ProtectedDerived object1;
	cout << "Private cannot be accessed." << endl;
	cout << "Protected = " << object1.getProt() << endl;
	cout << "Public = " << object1.getPub() << endl;


	// Error: member "Base::getPVT()" is inaccessible
	// cout << "Private = " << object1.getPVT();

	// Error: member "Base::pub" is inaccessible
	// cout << "Public = " << object1.pub;
	return 0;
}
