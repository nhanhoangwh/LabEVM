#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x;
    cout << endl << " Enter value: ";
    cin >> x;

    float *ptr = &x;
    int int_x = *(int*)ptr;
    int_x &= ~(1 << 31);
    float result = *(float*)&int_x;
    
    // float result = abs(x);
    cout << " absolute value of x: " << result << endl << endl;
    return 0;
}