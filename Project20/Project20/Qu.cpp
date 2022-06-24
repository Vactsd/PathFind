#include "Qu.h"
using namespace std;
Queue::Element::Element(int d, Element* n)
{
	data = d;
	next = n;

}


Queue::Queue()
{
	_size = 0;
	head = tail = NULL;
}
Queue::~Queue()
{

}

void Queue::push(int d)
{
	Element* e = new Element(d, NULL);
	if (head == NULL)
	{
		head = e;
		tail = e;

	}
	else
	{

		tail->next = e;
		tail = e;
	}
	_size++;

}
int Queue::pull()
{
	if (head == NULL)
		return 0;
	int d = head->data;

	if (head == tail)
	{
		tail = NULL;
	}


	Element* e = head;
	head = head->next;
	delete e;
	_size--;

	return d;
}
void Queue::pop()
{
	if (head == NULL)
		cout << " There are no elements to delete" << endl;
	else
	{
		if (head == tail)
		{
			tail = NULL;
		}

		Element* e = head;
		head = head->next;
		delete e;
		_size--;
	}

}
int Queue::peek()
{
	if (head == NULL)
		return 0;
	else
		return head->data;
}

void Queue::print()
{
	if (head == NULL)
		cout << "There are no elements in queue " << endl;
	else
	{
		cout << head->data << endl;
	}
}

void Queue::clear()
{

}


int Queue::size()
{
	return _size;
}









