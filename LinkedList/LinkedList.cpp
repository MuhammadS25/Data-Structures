#include "LinkedList.h"
#include<assert.h>
template<class T>
Node<T>::Node() {
	value = 0;
	next = 0;
}

template<class T>
Node<T>::Node(T val)
{
	value = val;
	next = 0;
}
template<class T>
LinkedList<T>::LinkedList() {
	head = tail = 0;
	count = 0;
}

template<class T>
int LinkedList<T>::length()
{
	return count;
}

template<class T>
T LinkedList<T>::at(int index)
{
	assert(index >= 0 && index < count);

	Node<T>* tmp = head;
	for (int i = 0; i < index; i++)
		tmp = tmp->next;
	return tmp->value;
}

template<class T>
void LinkedList<T>::insertAt(int index, T val)
{
	Node<T>* n = new Node<T>(val);
	if (index == 0) {
		n->next = head;
		head = n;
	}
	else {
		Node<T>* tmp = head;
		for (int i = 0; i < index - 1; i++) {
			tmp = tmp->next;
		}
		n->next = tmp->next;
		tmp->next = n;
	}
	count++;
}

template<class T>
void LinkedList<T>::append(T val)
{
	Node<T>* n = new Node<T>(val);
	if (count == 0)
		head = tail = n;
	else
	{
		tail->next = n;
		tail = n;
	}
	count++;
}

template<class T>
void LinkedList<T>::deleteAt(int index)
{
	Node<T>* tmp = head;
	if (index == 0) {
		head = head->next;
		delete tmp;
	}
	else {
		for (int i = 0; i < index - 1; i++) {
			tmp = tmp->next;
		}
		Node<T>* d = tmp->next;
		tmp->next = d->next;
		delete d;
		if (index == count-1)
			tail = tmp;
	}
	count--;

}

template<class T>
LinkedList<T>::~LinkedList(void)
{
}
