#pragma once
#include "Component.h"
class ConcreteComponent :
    public Component
{
public:
    string Operation() const override
    {
        return "Concrete Component.";
    }
};

