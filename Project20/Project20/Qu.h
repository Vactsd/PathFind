#pragma once
#include<iostream>

class Queue
{

private:
	struct Element
	{
		int data;
		Element* next;
		Element(int d, Element* n = NULL);
	};
	Element* head;
	Element* tail;
	int _size;

public:
	Queue();
	~Queue();

	void push(int d);
	int pull();
	void pop();
	int peek();

	void print();

	void clear();

	int size();


};

