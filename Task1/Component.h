#pragma once
#include <iostream>
#include <string>
using namespace std;

class Component
{
public:
	virtual string Operation() const = 0;
	virtual ~Component() {};
};

