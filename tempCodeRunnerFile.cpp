#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S = 0, eps, term;
    int i = 2;
    cout << "\n Input e: ";
    cin >> eps;
    while (true) {
        term = pow(-1, i) * (i + 1) / (i * i - i);
        if (abs(term) < eps) {
            break;
        }
        S += term;
        i++;
    }
    cout << "\n Sum = " << S << endl;
    return 0;
}
