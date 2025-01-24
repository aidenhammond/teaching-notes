// C++ program to demonstrate the working of public inheritance

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
 * NOTE: We have inherited it as "public" and thus pub is inherited as public,
 * prot is inherited as protected, and pvt is inaccessible since it is private in `Base`
 **/

class PublicDerived : public Base {
  public:
    // function to access protected member from Base
    int getProt() {
      return prot;
    }
};

int main() {
  PublicDerived object1;
  cout << "Private = " << object1.getPVT() << endl;
  cout << "Protected = " << object1.getProt() << endl;
  cout << "Public = " << object1.pub << endl;

  // Error: member "Base::pvt" is inaccessible
  cout << "Private = " << object1.pvt;

  // Error: member "Base::prot" is inaccessible
  cout << "Protected = " << object1.prot;
  return 0;
}
