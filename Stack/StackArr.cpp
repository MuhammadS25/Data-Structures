#include "StackArr.h"
#include<iostream>
#include "assert.h"
using namespace std;
template <class T>
StackArr<T>::StackArr(void) {
	elements = 0;
	capacity = 10;
	arr = new T[capacity];
}
template <class T>
StackArr<T>::StackArr(int size) {
	elements = 0;
	capacity = size;
	arr = new T[capacity];
}
template <class T>
int StackArr<T>::length() {
	assert(elements != 0);
	return elements;
}
template <class T>
void StackArr<T>::push(T value) {
	if (capacity == elements)
		expand();
	arr[elements] = value;
	elements++;
}
template <class T>
void StackArr<T>::pop()
{
	assert(elements != 0);
	elements--;
}
template <class T>
T StackArr<T>::top()
{
	assert(elements != 0);
	return arr[elements-1];
}
template <class T>
bool StackArr<T>::empty()
{
	if (elements)
		return false;
	else
		return true;
}
template <class T>
void StackArr<T>::expand()
{
	T* a = new T[capacity * 2];
	for (int i = 0; i < elements; i++) {
		a[i] = arr[i];
	}
	capacity *= 2;
	delete[] arr;
	arr = a;
}
template <class T>
void StackArr<T>::Binary(int decimal) {
	while (decimal) {
		this->push(decimal % 2);
		decimal /= 2;
	}
	int size = this->length();
	for (int i = 0; i < size; i++) {
		cout << this->top();
		this->pop();
	}
	cout << endl;
}
template <class T>
StackArr<T>::~StackArr(void)
{
	delete[]arr;
}
