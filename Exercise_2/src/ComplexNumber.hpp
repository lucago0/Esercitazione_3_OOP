#include <iostream>

using namespace std;
namespace ComplexLib{

struct ComplexNumber{
    double re;
    double im;

    ComplexNumber(){
        re = 0;
        im = 0;
    }

    ComplexNumber(double a, double b){
        re = a;
        im = b;
    }

    ComplexNumber conj(){
        ComplexNumber zbar(re,-im);
        return zbar;
    }
};

ostream& operator << (ostream& os, const ComplexNumber& z);

ComplexNumber operator + (const ComplexNumber& z1, const ComplexNumber& z2);

bool operator == (const ComplexNumber& z1, const ComplexNumber& z2);
}
