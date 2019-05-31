#pragma once
#include <iostream>
#include <string>
using namespace std;
 class exc {
		string str;
	public:
		exc(string str)
			:str(str){}
		string what()const { return str; }
};