#include <cmath>
#include <iostream>
using namespace std;

class Wektor2D
{
public:
    Wektor2D() : x{0}, y{0} {}
    Wektor2D(double _x, double _y) : x{_x}, y{_y} {}
    void     setX(double _x) { x = _x; }
    void     setY(double _y) { y = _y; }
    Wektor2D operator+(Wektor2D& obj)
    {
        Wektor2D sum;
        sum.x = this->x + obj.x;
        sum.y = this->y + obj.y;
        return sum;
    }
    double operator*(Wektor2D obj) { return this->x * obj.x + this->y * obj.y; }
    double getX() { return x; }
    double getY() { return y; }
    double x, y;
};

int main()
{
    Wektor2D v1{};         // Konstruktor domyślny, wektor o wsp. [0, 0]
    v1.setX(2.);           // setter
    v1.setY(1.);           // setter
    double x1 = v1.getX(); // getter
    double y1 = v1.getY(); // getter

    Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

    Wektor2D sum = v1 + v2; // dodawanie wektorów

    double prod = v1 * v2; // iloczyn skalarny
    cout << "sum = [" << sum.x << ", " << sum.y << "]\n";
    cout << "prod = " << prod << "\n";

    return 0;
}
