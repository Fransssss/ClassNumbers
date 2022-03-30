// Title: Simple C++ class
// Purpose: Create simple class with in of class implementation/ inline
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include <iostream>

using std::cout;
using std::endl;

class myNumbers
{
private:
    double _a;
    double _b;
    double _c;
public:
    // Using Inline implementation
    void SetA (const double a) {_a = a;};                        // put const because we don't want to modify the value when we assign it
    void SetB (const double b) {_b = b;};
    void SetC (const double c) {_c = c;};
    double GetA() const { return _a;} ;                          // put const because we don't want to modify the value when we access it
    double GetB() const{ return _b;};
    double GetC() const { return _c;};
};


int main() {
    myNumbers oneNum;                                      // create object type class' name
    myNumbers twoNum;
    myNumbers threeNum;

    oneNum.SetA(1.1);                                      // the type of object  enables the object to call and use function from class
    twoNum.SetB(2.2);
    threeNum.SetC(3.3);

    cout << " 1st number - " << oneNum.GetA() << endl;
    cout << " 2nd number - " << twoNum.GetB() << endl;
    cout << " 3rd number - " << threeNum.GetC() << endl;

    return 0;
}
