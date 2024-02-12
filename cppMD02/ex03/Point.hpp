#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	private:
		Fixed const _x;
		Fixed const _y;

	public:
		Point();
		Point(float x, float y);
		Point(const Point &src);
		~Point();

		Point& operator=(const Point &src);
		Fixed  getX(void) const;
		Fixed  getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif