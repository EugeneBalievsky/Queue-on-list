#ifndef _QUEUE_H
#define _QUEUE_H

struct Node {
	int value;
	Node* next;
	Node* prev;
};

struct Queue {
	Node* head;
	Node* tail;
};

Node* create_node(int value, Node* next = nullptr, Node* prev = nullptr);
Queue* create_queue(Node* head);
bool isEmpty(Queue* q);
void print(Queue* q);
void push(Queue*& q, int value);
void pop(Queue*& q);
int get_front(Queue* q);

#endif

