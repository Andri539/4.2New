#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << endl;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|   x   |       y        |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    A = 8.1 * pow(x, 3);

    while (x <= xk) {
        if (x <= -3.5)
            B = tan(2 * x) * tan(x / 2);
        else if (-3.5 < x && x <= 1)
            B = atan(abs(x * 1));
        else
            B = pow(cos(x - 5), -3);

        y = A + B;

        cout << "| " << setw(6) << setprecision(2) << x << " | "
            << setw(12) << setprecision(3) << y << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;
    return 0;
}
