#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N = 1000;
    double Sd = 0.0, Sa = 0.0;

    // Calculating Sd(N)
    for (int i = 1; i <= N; ++i) {
        Sd += 1.0 / i;
    }

    // Calculating Sa(N)
    for (int i = N; i >= 1; --i) {
        Sa += 1.0 / i;
    }

    cout << endl << setprecision(15) << "Sd(" << N << ") = " << Sd << endl;
    cout << setprecision(15) << "Sa(" << N << ") = " << Sa << endl;

    N = 1000000;
    Sd = 0.0;
    Sa = 0.0;

    // Calculating Sd(N)
    for (int i = 1; i <= N; ++i) {
        Sd += 1.0 / i;
    }

    // Calculating Sa(N)
    for (int i = N; i >= 1; --i) {
        Sa += 1.0 / i;
    }

    cout << setprecision(15) << "Sd(" << N << ") = " << Sd << endl;
    cout << setprecision(15) << "Sa(" << N << ") = " << Sa << endl;

    N = 1000000000;
    Sd = 0.0;
    Sa = 0.0;

    // Calculating Sd(N)
    for (int i = 1; i <= N; ++i) {
        Sd += 1.0 / i;
    }

    // Calculating Sa(N)
    for (int i = N; i >= 1; --i) {
        Sa += 1.0 / i;
    }

    cout << setprecision(15) << "Sd(" << N << ") = " << Sd << endl;
    cout << setprecision(15) << "Sa(" << N << ") = " << Sa << endl << endl;

    return 0;
}
