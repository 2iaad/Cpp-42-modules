#include "Point.hpp"

Point::Point(void) : _x(0), _y (0) { }

Point::Point(const int x, const int y) : _x (Fixed(x)), _y (Fixed(y)) { }

Point::Point(const float x, const float y) : _x (Fixed(x)), _y (Fixed(y)) { }

Point:: Point(const Point &new_point) : _x (new_point.getX()), _y (new_point.getY()) { }

Point& Point::operator=(Point &other) {
	if (this != &other)
	{
		this->x = other.getX();
		this->y = other.getY();
	}
	return *this;
}

Point::~Point() { }

Fixed Point::getX (void) const{ return this->_x; }

Fixed Point::getY (void) const { return this->_y; }