#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int m = 223;
    int n = -455;
    float a = 0;
    float b = 1;
    float c = 12345678;
    float d = 123456789;

    cout << endl << "Original values:" << endl;
    cout << " m = " << m << endl;
    cout << " n = " << n << endl;
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;
    cout << " d = " << d << endl<< endl;

    m++; // increment
    n--; // decrement

    cout << "Result values:" << endl;
    cout << " m = " << m << endl;
    cout << " n = " << n << endl;

    // increment and decrement for floating point values not applicable, so just print the original values
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;
    cout << " d = " << d << endl<< endl;

    // test edge cases
    unsigned int max_uint = UINT_MAX;
    int min_int = INT_MIN;
    int max_int = INT_MAX;

    cout << "Testing edge cases:" << endl;
    cout << "max unsigned int = " << max_uint << endl;
    cout << "min int = " << min_int << endl;
    cout << "max int = " << max_int << endl << endl;

    max_uint++; // increment max unsigned int
    min_int--; // decrement min int
    max_int++; // increment max int

    cout << "Result values:" << endl;
    cout << "max unsigned int = " << max_uint << endl;
    cout << "min int = " << min_int << endl;
    cout << "max int = " << max_int << endl<< endl;

    return 0;
}
