#pragma once
#include <iostream>
#include <string>
#include "Decorator.h"
class ConcreteDecoratorB :
    public Decorator
{
public:
    ConcreteDecoratorB(Component* component) : Decorator(component) {
    }
    string Operation() const override {
        return  "ConcreteDecoratorB(" + Decorator::Operation() + ")";
    }
};

