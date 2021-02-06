class Wektor2D
{
	public:
	Wektor2D() : x{0}, y{0} {}
	Wektor2D(double _x, double _y) : x{_x}, y{_y} {}
	void setX(double _x){
		x = _x;
	}
	void setY(double _y){
		y = _y;
	}
	Wektor2D& operator+(Wektor2D obj){
		Wektor2D sum;
		sum.x = this->x + obj.x;
		sum.y = this->y + obj.y;
		return sum;
	}
	double operator*(Wektor2D obj){
		return this->x * obj.x + this->y * obj.y;
	}
	double getX(){ return x; }
	double getY(){ return y; }
	double x, y;
};
