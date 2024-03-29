#include "ComplexNumber.hpp"
#include <iostream>

using namespace std;
namespace ComplexLib{

ostream& operator << (ostream& os, const ComplexNumber& z){
    if (z.im == 0 && z.re == 0){
        os << 0;
    }
    if (z.re != 0){
        os << z.re;
    }
    if (z.im == 0){
        return os;
    }
    else if (z.im == 1){
        os << "+i";
    }
    else if (z.im == -1) {
        os<< "-i";
    }
    else if (z.im < 0){
        os << "-" << -z.im << "i";
    }
    else{
        os << "+" << z.im << "i";
    }
    return os;
}

ComplexNumber operator + (const ComplexNumber& z1, const ComplexNumber& z2){
    double Re_of_z = z1.re + z2.re;
    double Im_of_z = z1.im + z2.im;
    ComplexNumber z(Re_of_z,Im_of_z);
    return z;
}

bool operator == (const ComplexNumber& z1, const ComplexNumber& z2){
    if (z1.re == z2.re && z1.im == z2.im)
        return true;
    else
        return false;
}
}
