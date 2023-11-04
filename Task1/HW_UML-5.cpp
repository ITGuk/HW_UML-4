#include <iostream>
#include <string>
#include "Component.h"
#include "ConcreteComponent.h"
#include "Decorator.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
using namespace std;


int main() 
{
	Component* simple = new ConcreteComponent;
	cout << "Client: I've got a simple component:\n";
	cout << "Result: " << simple->Operation();
	cout << "\n\n";
	
	Component* decorator1 = new ConcreteDecoratorA(simple);
	Component* decorator2 = new ConcreteDecoratorB(decorator1);

	cout << "Client: Now I've got a decorated component:\n";
	cout << "Result: " << decorator1->Operation();
	cout << "\n\n";

	cout << "Client: Now I've got a decorated component:\n";
	cout << "Result: " << decorator2->Operation();
	cout << "\n\n";
}