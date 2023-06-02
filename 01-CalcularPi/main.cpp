#include <iostream>
using namespace std;

int main() {
    double sumatoria = 0;
    int iteraciones = 1000000;

    for (int n = 0; n < iteraciones; n++) {
        double division = (n % 2 == 0) ? 1.0 / (2*n + 1) : -1.0 / (2*n + 1);
        sumatoria += division;
    }

    double pi = 4 * sumatoria;
    cout.precision(7);
    cout << "El valor de pi es: " << pi << endl;
    return 0;
}
