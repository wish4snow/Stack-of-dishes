#include "stack.hpp"

using namespace std;

Stack::Stack() {
	this->array_size = 0;
}


void Stack::push (Dish element) {
	if (array_size < 10) {
			this->elements[array_size] = element;
			this->array_size++;
		} else {
			cout << "you can't push anything else to the stack" << endl;
		}


}

Dish Stack::pop(){
	if (array_size == 0) {
		cout << "you have nothing else to pop" << endl;
		return Dish();
	} else {


			this->array_size--;
			return elements[array_size];

}
}

Dish Stack::peek(){
	return elements[array_size - 1];

}


int Stack::size(){
return array_size;

}