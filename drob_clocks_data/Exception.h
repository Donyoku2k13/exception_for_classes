#pragma once
#include <iostream>
#include <string>
using namespace std;

class OurException :public exception {
	int level;
	string res;
public:
	OurException(string message, int level)
		:exception(message.c_str()), level(level)
	{
	}
	int getLevel() const { return level; }
	const char* what()const override {
		string &s = const_cast<string&>(res);
		s = exception::what();
		s += " level: " + to_string(level);
		return s.c_str();
		char* str = const_cast<char*>(exception::what());
		string res = " level:" + to_string(level);
		strcat_s(str, strlen(str) + res.size() + 2, res.c_str());
		return str;
		res = exception::what();
		res += " level: " + to_string(level);
		return res.c_str();