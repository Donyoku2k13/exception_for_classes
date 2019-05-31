
#pragma once
#include <iostream>
using namespace std;
class date
{
private:
	int d, m, y;

public:
	//date(int day=1,int month=1,int year=1970);
	date(int day, int month, int year);
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	string what_day();


	friend ostream& operator<<(ostream& os, const date &o);
	friend istream& operator>>(istream& is, date &o);
};