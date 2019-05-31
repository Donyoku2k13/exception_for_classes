#include "drob.h"
#include "exc.h"
drob::drob(int x, int y)
{
	this->setX(x);
	this->setY(y);
}

drob::drob(const drob & obj)
{
	this->x = obj.x;
	this->y = obj.y;
}

drob drob::operator+=(const drob & b)
{
	this->x = this->x*b.y + this->y*b.x;
	this->y *= b.y;
	return *this;
}

drob drob::operator-=(const drob & b)
{
	this->x = this->x*b.y - this->y*b.x;
	this->y *= b.y;
	return *this;
}
drob drob::operator*=(const drob & b)
{
	this->x = this->x*b.x;
	this->y *= b.y;
	return *this;
}
drob drob::operator/=(const drob & b)
{
	this->x = this->x*b.y;
	this->y *= b.x;
	return *this;
}

void drob::setX(int x)
{
	this->x = x;
}



double drob::getDrob()
{
	return 0.0;
}
drob operator+(const drob & a, const drob & b)
{
	drob tmp = a;
	tmp += b;
	return tmp;
}

ostream & operator<<(ostream & os, const drob & c)
{

	os << c.getX() << "/";
	os << c.getY() << endl;
	return os;

}

istream & operator>>(istream & is, drob & c)
{
	cout << "enter x" << endl;
	int a, b;
	cin >> a;
	c.setX(a);
	cout << "enter y" << endl;
	cin >> b;
	c.setY(b);
	return is;
}