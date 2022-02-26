#pragma once
#include <iostream>

class Figure
{
protected:
	std::string name;
	std::string color;
public:
	std::string getName();
	std::string getColor();
};

