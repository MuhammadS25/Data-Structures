#include "QueueArr.h"
#include<assert.h>
template<class T>
QueueArr<T>::QueueArr(void) {
	count = 0;
	size = 5;
	arr = new T[size];
	front = back = -1;
}
template<class T>
int QueueArr<T>::length()
{
	return count;
}
template<class T>
bool QueueArr<T>::empty()
{
	if (count)
		return false;
	else
		return true;
}
template<class T>
bool QueueArr<T>::full()
{
	if (count==size)
		return true;
	else
		return false;
}
template<class T>
void QueueArr<T>::enqueue(T value)
{
	assert(!full());
	back = (back + 1) % size;
	arr[back] = value;
	if (front == -1)
		front = 0;
	count++;
}
template<class T>
void QueueArr<T>::dequeue()
{
	assert(!empty());
	front = (front + 1) % size;
	count--;
	if (!count)
		front = back = -1;
}
template<class T>
T QueueArr<T>::Front()
{
	assert(!empty());
	return arr[front];
}
template<class T>
QueueArr<T>::~QueueArr(void) {
	delete[]arr;
}