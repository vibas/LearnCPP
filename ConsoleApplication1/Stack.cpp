#include "Stack.h"
#define MAX 10

class Stack
{
private:
	int arr[MAX];
	int top;

public:
	Stack()
	{
		top = -1;
	}

	void Push(int item)
	{
		if (top == MAX - 1)
		{
			cout << "STACK IS FULL" << endl;
			return;
		}
		cout << "ITEM PUSHED " << item << endl;
		top++;
		arr[top] = item;
	}

	int Pop()
	{
		if (top == -1)
		{
			cout << "STACK IS EMPTY" << endl;
			return NULL;
		}
		int data = arr[top];
		cout << "ITEM POPPED " << data << endl;
		top--;

		return data;
	}

	void PrintAllItems()
	{
		if (top == -1)
			return;

		for (int i = 0; i <= top; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

void StackDemo()
{
	Stack s;
	s.Push(1);
	s.Push(3);
	s.Push(5);
	s.Push(7);
	s.Push(9);
	s.Push(11);
	s.Push(13);
	s.Push(15);
	s.Push(17);
	s.Push(19);
	s.Push(21);

	s.PrintAllItems();
	
	for (int i = 0; i < 5; i++)
	{
		s.Pop();
	}

	s.PrintAllItems();

	s.Push(2);
	s.Push(4);
	s.Push(6);
	s.Push(8);
	s.Push(10);

	s.PrintAllItems();

	for (int i = 0; i < 5; i++)
	{
		s.Pop();
	}

	s.PrintAllItems();
}