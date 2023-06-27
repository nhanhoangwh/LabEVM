#include <iostream>
#include <cmath>

using namespace std;

double calculate_leibniz(double eps) {
    double sum = 0;
    double term = 0;
    int i = 7;

    do {
        term = pow(-1, i) * 3 / (i - 6.0);
        sum += term;
        i++;
    } while (abs(term) > eps);

    return sum;
}

int main() {
    double eps;
    cout << "\n e: ";
    cin >> eps;

    double sum = calculate_leibniz(eps);
    cout << "\n S: " << sum << "\n\n";

    return 0;
}
