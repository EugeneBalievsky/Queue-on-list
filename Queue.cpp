#include <iostream>

#include "Queue.h"

Queue* create_queue(int value, Queue* next, Queue* prev) {
	Queue* q = new Queue;
	q->value = value;
	q->next = next;
	q->prev = prev;
	return q;
} 

bool isEmpty(Queue* q) {
	if (!q)
		return 1;
	else
		return 0;
}

void print(Queue* head) {
	if (isEmpty(head))
		std::cout << "Queue is empty!" << std::endl;
	for (Queue* it = head; it != nullptr; it = it->next) {
		std::cout << it->value << ' ';
	}
	std::cout << '\n';
}

void push(Queue*& head, int value) {
	Queue* ptr = create_queue(value);
	if (isEmpty(head)) {
		head = ptr;
		return;
	}
	else {
		Queue* it = head;
		for (it; it->next != nullptr; it = it->next);
		it->next = ptr;
		ptr->prev = it;
		
	}
}
void del_first(Queue*& head) {
	if (isEmpty(head)) {
		std::cout << "Queue is empty";
	}
	else {
		Queue* it = head;
		head = head->next;
		it = head->prev;
		head->prev = nullptr;
		delete it;
	}
}
Queue* find_first(Queue* head) {
	if (isEmpty(head)) {
		std::cout << "Queue is empty";
		return nullptr;
	}
	else {
		Queue* it = head;
		head = head->next;
		it = head->prev;
		 

		 return it;
	}
}

