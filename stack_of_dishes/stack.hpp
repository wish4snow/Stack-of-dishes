#include <iostream>
#include "dish.hpp"

using namespace std;

class Stack{
private:
	int array_size;
	Dish elements[10];

public:
	Stack ();

	void push(Dish element);
	Dish pop();
	Dish peek();
	int size();
};