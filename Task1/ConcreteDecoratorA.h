#pragma once
#include <iostream>
#include <string>
#include "Decorator.h"
using namespace std;
class ConcreteDecoratorA :
    public Decorator
{
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {
    }
    string Operation() const override {
        return "ConcreteDecoratorA(" + Decorator::Operation() + ")";
    }
};


