#pragma once
#include <iostream>
#include <string>
#include "Component.h"
using namespace std;
class Decorator 
	: public Component
{
public:
	Component* component_;
	Decorator(Component* component) : component_(component){}
		string Operation() const override
		{
			return this->component_->Operation();
		}
};
