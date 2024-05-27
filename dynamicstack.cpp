#include "dynamicstack.h"
#include <iostream>
using namespace std;

void DynamicStack::push(int num) {
	StackNode *newNode;
	newNode = new StackNode;
	newNode->value = num;
	
	if (isEmpty()) {
		top = newNode;
		top->next = NULL;
	}
	
	else {
		newNode->next = top;
		top = newNode;
	}
}

void DynamicStack::pop(int &num) {
	StackNode *temp;
	
	num = top->value;
	temp = top->next;
	delete top;
	top = temp;
}

bool DynamicStack::isEmpty() {
	bool status;
	if (!top) status = true;
	else status = false;
	return status;
}
