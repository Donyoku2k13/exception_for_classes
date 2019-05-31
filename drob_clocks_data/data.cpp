#include "data.h"
#include "exc.h"
#include <string>
date::date(int day = 1, int month = 1, int year = 1970)
{
	d = day;
	m = month;
	y = year;
}
date::date(int day, int month, int year) {
	setYear(year);
	setMonth(month);
	setDay(day);
}
void date::setDay(int day)
{
	this->d = day;
	switch (m)
	{
	case 1:if (day < 1 || day > 31)
	{
		this->d = 1;
	}
		   break;
	case 2:if (this->y % 4 == 0)
	{
		if (day < 1 || day > 29)
		{
			this->d = 1;
		}

	}
		   else
	{
		if (day < 1 || day > 28)
		{
			this->d = 1;
		}
	}
		   break;
	case 3:if (day < 1 || day > 31)
	{
		this->d = 1;
	}
		   break;
	case 4:if (day < 1 || day > 30)
	{
		this->d = 1;
	}
		   break;
	case 5:if (day < 1 || day > 31)
	{
		this->d = 1;
	}
		   break;
	case 6:if (day < 1 || day > 30)
	{
		this->d = 1;
	}
		   break;
	case 7:if (day < 1 || day > 31)
	{
		this->d = 1;
	}
		   break;
	case 8:if (day < 1 || day > 31)
	{
		this->d = 1;
	}
		   break;
	case 9:if (day < 1 || day > 30)
	{
		this->d = 1;
	}
		   break;
	case 10:if (day < 1 || day > 31)
	{
		this->d = 1;
	}
			break;
	case 11:if (day < 1 || day > 30)
	{
		this->d = 1;
	}
			break;
	case 12:if (day < 1 || day > 31)
	{
		this->d = 1;
	}
			break;
	}
}


void date::setMonth(int month)
{
	this->m = month;
	if (this->m > 12 || this->m < 1)
	{
		this->m = 1;
	}
}

void date::setYear(int year)
{
	this->y = year;
	if (year < 1970 && year > 2100)
		throw exc("invalid year!");
	else
		this->y = year;
}

int date::getDay() const
{
	return this->d;
}

int date::getMonth() const
{
	return this->m;
}

int date::getYear() const
{
	return this->y;
}

string date::what_day()
{
	string DoW[7] = { "sunday\n", "monday\n", "tuesday\n","wednesday\n", "thursday\n","friday\n","saturday\n" };
	int a = (14 - this->m) / 12;
	int y = this->y - a;
	int m = this->m + 12 * a - 2;
	int res = (this->d + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
	return DoW[res];

}




ostream& operator<<(ostream & os, const date & o)
{
	cout << o.d << " / " << o.m << " / " << o.y << endl;
	return os;
}

istream& operator>>(istream & is, date & o)
{
	cout << "enter year";
	int year;
	cin >> year;
	o.setYear(year);
	cout << "enter month";
	int month;
	cin >> month;
	o.setMonth(month);
	cout << "enter day";
	int day;
	cin >> day;
	o.setDay(day);
	return is;
}