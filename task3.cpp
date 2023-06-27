#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    short int num = 223;
    cout << "\n Given number: " << num << endl;

    num = num << 1;
    cout << "Signed multiplication of 223 by 2: " << num << endl;

    num = 223;
    unsigned short int unum = (unsigned short int)num;
    unum = unum << 1;
    cout << "Unsigned multiplication of 223 by 2: " << unum << endl;

    num = 223;
    num = num >> 1;
    cout << "Signed division of 223 by 2: " << num << endl;

    num = 223;
    unum = (unsigned short int)num;
    unum = unum >> 1;
    cout << "Unsigned division of 223 by 2: " << unum << endl;

    num = 223;
    unum = (unsigned short int)num;
    unum = unum % 16;
    cout << "Unsigned remainder of 223 divided by 16: " << unum << endl;

    num = 223;
    unum = (unsigned short int)num;
    unum = unum & 0xFFF0;
    cout << "Rounding down 223 to the nearest multiple of 16: " << unum << endl;

    num = -455;
    cout << endl << "\n Given number: " << num << endl;

    num = num << 1;
    cout << "Signed multiplication of -455 by 2: " << num << endl;

    num = -455;
    unum = (unsigned short int)num;
    unum = unum << 1;
    cout << "Unsigned multiplication of -455 by 2: " << unum << endl;

    num = -455;
    num = num >> 1;
    cout << "Signed division of -455 by 2: " << num << endl;

    num = -455;
    unum = (unsigned short int)num;
    unum = unum >> 1;
    cout << "Unsigned division of -455 by 2: " << unum << endl;

    num = -455;
    unum = (unsigned short int)num;
    unum = unum % 16;
    cout << "Unsigned remainder of -455 divided by 16: " << unum << endl;

    num = -455;
    unum = (unsigned short int)num;
    unum = unum & 0xFFF0;
    cout << "Rounding down -455 to the nearest multiple of 16: " << unum << endl<< endl;

    return 0;
}
