//constants
//they are expressions with a fixed value
//C++ allows the use of decimal numbers, octal numbers, and hexadecimal numbers
//75 - decimal
//0113 - octal
//0x4b - hexadecimal
//these all represent 75
//they have a type as well, just like variables
//they are int by default
//different suffixes may be applied to identify different types
//u or U - unsigned
//l or L - long
//ll or LL - long long
//75 - int
//75u - unsigned int
//75l - long
//75ul - unsigned long
//75lu - unsigned long
//floating point numbers - contains a decimal and an e character
//default float suffix is double
//4.502e25L - long double
//6.87e37F - float
#include <iostream>
using namespace std;

//const double pi = 3.14159;
//const char newline = '\n';

#define PI 3.14159
#define NEWLINE '\n'

int main()
{
    double r=5.0;
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;
}
