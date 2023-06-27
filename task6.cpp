#include <iostream>
using namespace std;

int main() {
    int num = 223; // example positive number
    cout << endl << "Initial value: " << num << endl;
    num++; // increment
    cout << "After increment: " << num << endl;
    num--; // decrement
    cout << "After decrement: " << num << endl;

    num = -455; // example negative number
    cout << endl << "Initial value: " << num << endl;
    num++; // increment
    cout << "After increment: " << num << endl;
    num--; // decrement
    cout << "After decrement: " << num << endl;

    unsigned int max_unsigned = 4294967295; // maximum unsigned 32-bit value
    cout << endl << "Initial value: " << max_unsigned << endl;
    max_unsigned++; // increment
    cout << "After increment: " << max_unsigned << endl;
    max_unsigned--; // decrement
    cout << "After decrement: " << max_unsigned << endl;

    int max_signed = 2147483647; // maximum signed 32-bit value
    cout << endl << "Initial value: " << max_signed << endl;
    max_signed++; // increment
    cout << "After increment: " << max_signed << endl;
    max_signed--; // decrement
    cout << "After decrement: " << max_signed << endl;

    int min_signed = -2147483648; // minimum signed 32-bit value
    cout << endl << "Initial value: " << min_signed << endl;
    min_signed--; // decrement
    cout << "After decrement: " << min_signed << endl<<endl;

    return 0;
}
