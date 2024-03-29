#include <iostream>
#include "ComplexNumber.hpp"
using namespace ComplexLib;

int main()
{
    ComplexNumber z(1,2);
    ComplexNumber w(0,1);
    cout << "z = " << z << endl;
    cout << "w = " << w << endl;
    cout << "z+w is " << z+w << endl;
    if (z == w){
        cout << "True: z is equal to w" << endl;
    }
    else{
        cout << "False: z is not equal to w" << endl;
    }
    cout << "The conjugate of z is " << z.conj() << endl;
}
