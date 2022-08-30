#include<iostream>
#include"Queue.h"


int main() {
	Node* l = create_node(4, nullptr, nullptr);
	Queue* qu = create_queue(l);
	
	print(qu);

	push(qu, 5);
	push(qu, 6);
	push(qu, 212);

	print(qu);

	pop(qu);
	pop(qu);
	

	print(qu);

	std::cout<< get_front(qu);

	
	return 0;
}