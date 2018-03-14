/*
 * @Author 	:	Amsavarthini Easwaran
 * @Started	:	11-09-2016
 */

//#include <unistd.h>

typedef int infixItemType;

//	class Stack

class InfixStack : public Stack{
	private:
		infixItemType *stack2;
		int p,top,x, infixStackSize;
		char c;
		bool infixStackCreated;
	public:
		InfixStack();
		~InfixStack();
		void push(postfixItemType v);
		infixItemType pop();
		void getInput();
		void printStackElements();
};

//	default constructor
InfixStack::InfixStack() {
}

//	destructor
InfixStack::~InfixStack() {
}

//	push the elements in the stack1
void InfixStack::push(postfixItemType v) {
}

//	pops the element out of the stack1
postfixItemType InfixStack::pop() {
}

//	gets the input for the push & pop operation
void InfixStack::getInput() {
}
