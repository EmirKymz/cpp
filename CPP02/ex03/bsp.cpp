#include "Point.hpp"

//c1 = (x2-x1)*(yp-y1)-(y2-y1)*(xp-x1)  x1 = a x2 = b x3 = c 
//c2 = (x3-x2)*(yp-y2)-(y3-y2)*(xp-x2)
//c3 = (x1-x3)*(yp-y3)-(y1-y3)*(xp-x3)

bool bsp(point const a, point const b, point const c, point const point)
{
    float x1 = a.get_x().toFloat();
    float x2 = b.get_x().toFloat();
    float x3 = c.get_x().toFloat();

    float y1 = a.get_y().toFloat();
    float y2 = b.get_y().toFloat();
    float y3 = c.get_y().toFloat();

    float pntx = point.get_x().toFloat();
    float pnty = point.get_y().toFloat();

    float c1 = (x2-x1)*(pnty-y1)-(y2-y1)*(pntx-x1);
    float c2 = (x3-x2)*(pnty-y2)-(y3-y2)*(pntx-x2);
    float c3 = (x1-x3)*(pnty-y3)-(y1-y3)*(pntx-x3);

    if((c1 < 0 and c2 < 0 and c3 < 0) or (c1 > 0 and c2 > 0 and c3 > 0))
        return(false);
    return(true);
}

/* bool bsp( point const a, point const b, point const c, point const point)
{
	Fixed x1 = a.get_x();
	Fixed y1 = a.get_y();
	Fixed x2 = b.get_x();
	Fixed y2 = b.get_y();
	Fixed x3 = c.get_x();
	Fixed y3 = c.get_y();
	Fixed x = point.get_x();
	Fixed y = point.get_y();

	Fixed d1 = (x - x1) * (y2 - y1) - (x2 - x1) * (y - y1);
	Fixed d2 = (x - x2) * (y3 - y2) - (x3 - x2) * (y - y2);
	Fixed d3 = (x - x3) * (y1 - y3) - (x1 - x3) * (y - y3);

	if (d1 >= 0 && d2 >= 0 && d3 >= 0)
		return true;
	else if (d1 <= 0 && d2 <= 0 && d3 <= 0)
		return true;
	else
		return false;
} */