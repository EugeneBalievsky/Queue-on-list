#include <iostream>

#include "Queue.h"

Node* create_node(int value, Node* next, Node* prev) {
	Node* ptr = new Node;
	ptr->value = value;
	ptr->next = next;
	ptr->prev = prev;
	return ptr;
} 

Queue* create_queue(Node* ptr) {
	Queue* q = new Queue;
	q->head = ptr;
	q->tail = ptr;
	return q;
}

bool isEmpty(Queue* q) {
	if (q->tail == q->head && q->head == nullptr) 
		return 1;
	else
		return 0;
}
void print(Queue* q) {
	if (isEmpty(q)) {
		std::cout << "Queue is empty!" << std::endl;
		return;
	}
	for (Node* it = q->head; it != nullptr; it=it->next) {
		std::cout << it->value << ' ';
	}
	std::cout << '\n';
}
void push(Queue*& q, int value) {
	Node* ptr = create_node(value);
    	if (isEmpty(q)) {
		q->head = ptr;
		return;
	}
	else {
		Node* it = q->tail;
		it->next = ptr;
		ptr->prev = it;
		ptr->next = nullptr;
		q->tail = ptr;

	}
}
void pop(Queue*& q) {
	if (isEmpty(q)) {
		std::cout << "Queue is empty";
		return;
	}
	else {
		Node* it = q->head;
		q->head = q->head->next;
		it = q->head->prev;
		q->head->prev = nullptr;
		delete it;
	}
}
int get_front(Queue* q) {
	if (isEmpty(q)) {
		std::cout << "Queue is empty";
		return 0;
	}
	else {
		return q->head->value;
	}
}
