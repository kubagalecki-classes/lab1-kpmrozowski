#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    double A = 0;
    double B = 0;
    Wektor2D(){};
    Wektor2D(double xx, double yy)
    {
        A       = xx;
        this->A = xx;
        B       = yy;
        this->B = yy;
        cout << "x = " << A << "\ny = " << B;
    }
    ~Wektor2D() { cout << "\nx = " << this->A << "\ny = " << this->B; }
    double norm(double x, double y) const { return pow(pow(x, 2) + pow(y, 2), 0.5); }
};

int main()
{
    puts("Hello, World!");
    Wektor2D q0, q1(3.1, 3.9);
    double   norma = 0;
    norma          = q0.norm(1.2, 1.6);
    cout << "\nnorma=" << norma;
    return 0;
}
