#include <iostream>
#include <cmath>

using namespace std;

double generalizedHarmonicSum(double alpha, double epsilon) {
    double sum = 0;
    double term = 0;
    int i = 1;

    do {
        term = 1/pow(i, alpha);
        sum += term;
        i++;
    } while (term > epsilon);
    
    return sum;
}

int main() {
    double alpha = 2;
    double epsilon;

    cout << "\n Input epsilon: ";
    cin >> epsilon; // 0.00000000001, 0.01 etc

    double sum = generalizedHarmonicSum(alpha, epsilon);
    
    cout << "\n Sum with alpha(" << alpha << ") and epsilon(" << epsilon << ") = " << sum << endl << endl;
    
    return 0;
}
