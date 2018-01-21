namespace Stack { // Interface
	void push(char);
	char pop();
}

void f() {
	Stack::push('c');
	if(Stack::pop() != 'c') error("Impossible");
}