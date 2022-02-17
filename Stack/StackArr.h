#pragma once
template <class T>
class StackArr
{
	T* arr;
	int elements;
	int capacity;
public:
	StackArr(void);
	StackArr(int size);
	int length();
	void push(T value);
	void pop();
	T top();
	bool empty();
	void expand();
	void Binary(int decimal);
	~StackArr(void);
};

