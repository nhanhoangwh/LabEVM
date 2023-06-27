#include <iostream>
using namespace std;

int main() {
    short int x = 223;
    cout << "x = " << x << endl;

    // signed left shift by 1 bit
    x = x << 1;
    cout << "  signed left shift by 1 bit: " << x << endl;

    // unsigned left shift by 1 bit
    x = (unsigned short)x << 1;
    cout << "  unsigned left shift by 1 bit: " << x << endl;

    // signed right shift by 1 bit
    x = x >> 1;
    cout << "  signed right shift by 1 bit: " << x << endl;

    // unsigned right shift by 1 bit
    x = (unsigned short)x >> 1;
    cout << "  unsigned right shift by 1 bit: " << x << endl;

    // calculates x & 15
    x = 223;
    x = x & 15;
    cout << "  x & 15: " << x << endl;

    // calculates x & -16
    x = 223;
    x = x & -16;
    cout << "  x & -16: " << x << endl;

    x = -455;
    cout << "x = " << x << endl;

    // signed left shift by 1 bit
    x = x << 1;
    cout << "  signed left shift by 1 bit: " << x << endl;

    // unsigned left shift by 1 bit
    x = (unsigned short)x << 1;
    cout << "  unsigned left shift by 1 bit: " << x << endl;

    // signed right shift by 1 bit
    x = x >> 1;
    cout << "  signed right shift by 1 bit: " << x << endl;

    // unsigned right shift by 1 bit
    x = (unsigned short)x >> 1;
    cout << "  unsigned right shift by 1 bit: " << x << endl;

    // calculates x & 15
    x = -455;
    x = x & 15;
    cout << "  x & 15: " << x << endl;

    // calculates x & -16
    x = -455;
    x = x & -16;
    cout << "  x & -16: " << x << endl;

    return 0;
}
