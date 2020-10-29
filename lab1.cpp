#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D(double xx, double yy)
    {
        double A = xx;
        double B = yy;
        cout << "A = " << A << "\nB = " << B;
    }

    double norm() const { double xxx = A; }

    double norm(double x, double y) const { return pow(pow(x, 2) + pow(y, 2), 0.5); }
};

int main()
{
    puts("Hello, World!");
    Wektor2D q, q(3.1, 3.9);
    double   norma = 0;
    norma          = q.norm(1.2, 1.6);
    cout << "norma=" << norma;

    return 0;
}
