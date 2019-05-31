#pragma once
#include <iostream>
#include <string>
using namespace std;
class clocks
{
private:
	int h;
	int m;
	int s;
public:
	//setters
	void setclocks() {
		do
		{
			cout << "Enter hour\n";
			cin >> h;
			cout << "Enter minutes\n";
			cin >> m;
			cout << "Enter seconds\n";
			cin >> s;
		} while (h < 0 || h >= 23);
	}
	void setHour(int a) {

		if (h < 0 || h >= 23)
			h = a;
		else
			h = 0;

	}

	void setMinutes(int b) {

		if (m < 0 || m >= 59)
		{
			m = b;
		}
		else
		{
			m = 0;
		}
	}

	void setseconds(int c) {

		if (s < 0 || s >= 59)
		{
			s = c;
		}
		else
		{
			s = 0;
		}
	}

	void addhour() {
		if (h > 22)
		{
			h = 0;
		}
		else h++;
	}
	void addminute() {
		if (m > 58) {
			m = 0;
			addhour();
		}
		else
		{
			m++;
		}
	}
	void addsecond() {
		if (s > 58)
		{
			s = 0;
			addminute();
		}
		else
		{
			s++;
		}
	}
	//getters
	void showclocks() {
		if (h < 10)
		{
			cout << "0";
		}
		cout << h << " : ";
		if (m < 10)
		{
			cout << "0";
		}
		cout << m << " : ";
		if (s < 10)
		{
			cout << "0";
		}
		cout << s << endl;

	}
	int getH() { return h; }
	int getM() { return m; }
	int geS() { return s; }


};
