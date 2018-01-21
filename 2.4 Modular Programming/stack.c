#inlcude "stack.h"

namespace Stack {
	const int max_size = 200;
	
	char v[max_size];
	int top = 0;
}

void Stack::push(char c) {
	/* Check for overflow and push c */
	if(top == max_size) throw Overflow();

	// Push c
}

char Stack::pop() {
	/* Check for underflow and pop */
}