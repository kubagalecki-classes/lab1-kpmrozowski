#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    double norm(double x, double y) const { return pow(pow(x, 2) + pow(y, 2), 0.5); }
};

int main()
{
    puts("Hello, World!");
    Wektor2D q;
    double   norma = 0;
    norma          = q.norm(1.2, 1.6);

    cout << "norma=" << norma;

    return 0;
}
