#ifndef POINT_HPP
# define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	const	Fixed _x;
	const	Fixed _y;

public:
	Point();
	Point(const Point &new_point);
	~Point();
	Point& operator= (Point &origin);

	Point(const int x, const int y);
	Point(const float x, const float y);

	Fixed getX (void) const;
	Fixed getY (void) const;
	Fixed setX (const Fixed x) const;
	Fixed setY (const Fixed x) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
