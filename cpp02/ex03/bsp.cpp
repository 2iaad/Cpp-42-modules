#include "Point.hpp"
#include "Fixed.hpp"

Fixed	positive_value(Fixed val) {
	if (val.getRawBits() < 0)
		return Fixed (-1) * val;
	return val;
}

Fixed	area_triangle(Point a, Point b, Point c) {
	return Fixed (0.5f) * (positive_value (a.getX() * (b.getY() - c.getY()) +
									b.getX() * (c.getY() - a.getY()) +
									c.getX() * (a.getY() - b.getY())));
}

bool	bsp(Point x, Point a, Point b, Point c) {

	if (area_triangle(a, b, c) == area_triangle(a, b, x) + area_triangle(a, x, c) + area_triangle(x, b, c))
		return true;
	return false;
}
