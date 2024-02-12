#include "Point.hpp"

//absolute function to make value positive

static Fixed	abs(Fixed x)
{
	if (x < 0)
		return(x * -1);
	return x;
}

//use shoelace formula to calculate area of triangle
static Fixed	area(Point const a, Point const b, Point const c)
{
	return (((a.getX() * (b.getY() - c.getY())) +
			(b.getX() * (c.getY() - a.getY())) +
			(c.getX() * (a.getY() - b.getY()))) / 2);
}

/*bsp creates 3 sub triangles with the 'point' to compare to the
area of the actual triangle abc, if the point was inside,
 the orientations of the sub-triangles will be consitent with
 the main triangle. if its outside the orientation of 1+ sub triangles
 will cause the sum of the 3 to be greater that the value of the main triangle
*/

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc = abs(area(a, b, c));
	Fixed pcb = abs(area(point, b, c));
	Fixed pab = abs(area(a, b, point));
	Fixed pca = abs(area(a, point, c));
	//std::cout << "abc:" << abc << std::endl;
	//std::cout << "pcb:" << pcb << std::endl;
	//std::cout << "pab:" << pab << std::endl;
	//std::cout << "pca:" << pca << std::endl;
	return (abc == pab + pcb + pca);
}