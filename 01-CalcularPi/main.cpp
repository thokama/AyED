#include <iostream>
using namespace std;

int main() {
    double sumatoria = 0;
    double precision = 0.0000001;
    int n = 0;

    while (true) {
        double division = (n % 2 == 0) ? 1.0 / (2*n + 1) : -1.0 / (2*n + 1);
        sumatoria += division;
        n++;

        double pi = 4 * sumatoria;
        double diferencia = abs(pi - 3.141592);

        if (diferencia < precision) {
            cout.precision(7);
            cout << "El valor de pi es: " << pi << endl;
            break;
        }
    }
    return 0;
}