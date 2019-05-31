#pragma once 
#include<iostream> 
using namespace std;
class drob
{
	int x, y;
public:
	drob(int x = 0, int y = 0);
	drob(const drob & obj);
	drob operator+=(const drob&b);
	drob operator*=(const drob&b);
	drob operator-=(const drob&b);
	drob operator/=(const drob&b);
	void setX(int x);
	bool setY(int y) {

		if (y == 0)
			throw exc("Division by zero!");
		this->y = y;

	}
	int getX()const { return this->x; }
	int getY()const { return this->y; }
	double getDrob();
	void print() { cout << x << "/" << y << endl; }

	//prefix 
	drob& operator++() {
		this->x += this->y;
		return *this;
	}
	drob& operator--() {
		this->x -= this->y;
		return *this;
	}
	//postfix
	drob operator++(int) {
		drob c = *this;
		this->x += this->y;
		return c;
	}
	drob operator--(int) {
		drob c = *this;
		this->x -= this->y;
		return c;
	}



};
drob operator+(const drob& a, const drob& b);


ostream& operator<<(ostream &os, const drob&c);
istream& operator>>(istream&is, drob&c); 
