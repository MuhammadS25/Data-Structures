#pragma once

using namespace std;
template <class T>
class Node
{
public:
	T value;
	Node<T>* left,  *right;
	Node(void);
	Node(T val);
};

template <class N>
class BST
{
	Node<N>* root;
public:
	BST(void);
	bool contains(N val);
	Node<N>* findNode(N val);
	void insert(N val);
	void traverse(int);
	void inOrder(Node<N>* start);
	void preOrder(Node<N>* start);
	void postOrder(Node<N>* start);
	

};

