#include "Point.h"

Point::Point(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Point::setx(int x)
{
	this->x = x;
}
void Point::sety(int y)
{
	this->y = y;
}
int Point::getx()
{
	return this->x;

}
int Point::gety()
{
	return this->y;
}
bool  Point::operator==(Point b)
{
	if (this->getx() == b.getx() && this->gety() == b.gety())
		return true;
	else
		return false;


}
bool  Point::operator!=(Point b)
{
	if ( *this==b)
		return false;
	else
		return true;


}
