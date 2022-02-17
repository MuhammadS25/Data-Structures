#pragma once
template <class T>
class QueueArr
{
private:
	T* arr;
	int count, size, front, back;

public:
	QueueArr(void);
	int length();
	bool empty();
	bool full();
	void enqueue(T value);
	void dequeue();
	T Front();
	~QueueArr(void);
};

