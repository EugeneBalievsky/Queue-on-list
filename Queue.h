#ifndef _QUEUE_H
#define _QUEUE_H


struct Queue {
	int value;
	Queue* next;
	Queue* prev;
};

Queue* create_queue(int value, Queue* next = nullptr, Queue* prev = nullptr);
bool isEmpty(Queue* q);
void print(Queue* head);
void push(Queue*& head, int value);
void del_first(Queue*& q);
Queue* find_first(Queue* head);

#endif

