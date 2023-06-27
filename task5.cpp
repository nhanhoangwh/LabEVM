#include <iostream>

using namespace std;

int main()
{
    // Example value of x
    unsigned int x;
    cout << "\n x = ";
    cin >> x;

    // Rounding down using bitwise operation
    unsigned int resultDown = x & ~(0xFF);

    // Rounding up using bitwise operation
    unsigned int resultUp = (x + 0xFF) & ~(0xFF);
    
    cout << " Rounded down value: " << resultDown << endl;
    cout << " Rounded up value: " << resultUp << endl<<endl;

    return 0;
}
