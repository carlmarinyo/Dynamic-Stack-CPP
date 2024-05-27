#ifndef DYNAMICSTACK_H
#define DYNAMICSTACK_H
#include <iostream>
class DynamicStack
{
	struct StackNode {
		int value;
		StackNode *next;
	};
	StackNode *top;
	public:
	DynamicStack() {
		top = NULL;
	}
	
	void push(int num);
	void pop(int &num);
	bool isEmpty();
};

#endif
