#include<iostream>
#include"Queue.h"


int main() {
	Queue* qu;
	

	qu = create_queue(4, nullptr, nullptr);
	
	for (int i = 1; i < 18; ++i)
	    push(qu, i);

	print(qu);

	for (int i = 0; i < 9; ++i)
	    del_first(qu);
	print(qu);
	
	Queue * f = find_first(qu);
	print(f);
	return 0;
}