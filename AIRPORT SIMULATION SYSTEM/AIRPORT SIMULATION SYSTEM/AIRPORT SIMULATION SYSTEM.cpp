// airport simulation system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//implementation of airport traffic system
#include "pch.h"
#include <iostream>
#include<cstdlib>
#include <ctime>
#include <conio.h>
#include <math.h>
#include<time.h>
using namespace std;
class Plane {
public:
	int id;
	int priority;
	Plane() {
		id = 0;
		priority = (((rand() % 9) + 1) * 5);  //? the range is from 1 to 10 
	}
	int getid() { //getting id of plane
		return id;
	}
	void setid(int a) { //setting id of plane
		id = a;
	}
	void setairtime(int a) //setting priority of plane
	{
		priority = a;
	}
	int getairtime()
	{
		return priority;
	}
};
class Queue {
public:
	Plane *p;
	int size, front, rear;
	Queue() {
		size = 15;
		rear = 0;
		front = 0;
		p = new Plane[size];
	}
	int quesize()
	{
		return (rear - front);
	}
	Plane Deque()
	{
		Plane element = p[front++];
		ajdustment();
		return element;
	}
	void printQueue()
	{
		for (int i = 0; i < rear; i++)
		{
			cout << "Plane at index " << i << " is " << p[i].getid() << endl;
		}
	}
	void fnque(Plane x)
	{
		if (!isfull())
		{
			p[rear++] = x;
		}
		else
		{
		}
	}
	int isfull()
	{
		if (rear == size)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	int isempty()
	{
		if (rear == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	void ajdustment()
	{
		for (size_t i = 0; i < (rear - front); i++)
		{
			p[i] = p[front + i];
		}
		rear = rear - front;
		front = 0;
	}
};
void divert(Plane a)
{
	int id = a.getid();
	cout << endl << "flight ->" << id << " diverted to other airport" << endl;
}
Queue arrange(Queue q1, Queue q2)
{
	while (!(q1.isempty()))
	{
		q2.fnque(q1.Deque());
	}
	return q2;
}
int counts(Queue q, Plane x)
{
	int count = 0, x1 = x.getairtime();
	Plane x2; bool b = true;
	while (b == true)
	{
		if (q.isempty())
		{
			b = false;
		}
		else
		{
			x2 = q.Deque();
			if ((x2.getairtime()) == x1)
			{
				count++;
			}
			else
			{
				b = false;
			}
		}
	}
	return count;
}
Queue sort(Queue q1, Plane a)
{
	int pos = 0;
	if (q1.isempty())
	{
		q1.fnque(a);
		return q1;
	}
	else
	{
		Queue q2;
		Plane x1, x2;
		bool b = true, c = true;
		while (b == true)
		{
			x1 = q1.Deque(); pos++;
			if ((a.getairtime()) <= (x1.getairtime()))
			{
				if ((x1.getairtime()) > (5 * pos))
				{
					Queue q3 = q1; int occr;
					occr = counts(q3, x1);
					occr += pos;
					if ((x1.getairtime()) > (5 * occr))
					{
						q2.fnque(a);
						q2.fnque(x1);
						q2 = arrange(q1, q2);
						b = false; c = false;
					}
					else
					{
						if ((occr) > 1)
						{
							q2.fnque(a);
							divert(x1);
							q2 = arrange(q1, q2);
							b = false; c = false;
						}
						else
						{
							q2.fnque(x1);
							divert(a);
							q2 = arrange(q1, q2);
							b = false; c = false;
						}
					}
				}
				else
				{
					q2.fnque(x1);
					divert(a);
					q2 = arrange(q1, q2);
					b = false; c = false;
				}
			}
			else
			{
				q2.fnque(x1);
			}
			if (q1.isempty() && (c == true))
			{
				q2.fnque(a);
				b = false;
			}
		}
		return q2;
	}
}
void status(Queue q)
{
	Queue a = q;
	cout << endl;
	while (!(a.isempty()))
	{
		cout << "|--------------|" << endl;
		cout << "   AIRPLANE " << (a.Deque()).getid() << endl;
		cout << "|--------------|" << endl;
	}
}
Queue airtdec(Queue q)
{
	Queue a = q, q1;
	cout << endl;
	while (!(a.isempty()))
	{
		Plane pl = (a.Deque());
		int at = (pl.getairtime());
		pl.setairtime(at - 5);
		q1.fnque(pl);
	}
	return q1;
}
int main()
{
	cout << "********************************************WELCOME TO ********************************************" << endl;
	cout << "*********************************************AIRPLANE LANDING **************************************" << endl;
	cout << "***************************************************************************************************" << endl;
	Queue landing, landing1;
	int planeno = 0;
	bool b = true;
	time_t pstart = time(&pstart);
	srand(planeno);
	time_t pend = pstart + ((rand() % 4) + 3);
	time_t pland = pstart + 5;
	while ((b == true))
	{
		if (round(difftime(pland, pstart)) == 0)
		{
			if (!(landing.isempty()))
			{
				landing1 = landing;
				Plane landed;
				landed = landing1.Deque();
				landing = landing1;
				cout << endl << "A plane has landed successfully" << endl;
				landing = airtdec(landing);
				pland = pstart + 5;
				status(landing);
			}
		}
		if ((round(difftime(pend, pstart)) == 0) && (planeno != 7))
		{
			Plane plane;
			plane.setid(++planeno);
			plane.setairtime((((rand() % 9) + 1) * 5));
			if (landing.isempty())
			{
				pland = pstart + 5;
			}
			landing = sort(landing, plane);
			cout << endl << "New AirPlane " << plane.getid() << "has been added int the queue" << endl;
			pend = pend + ((rand() % 4) + 3);
			cout << endl << "Here is the Queue status" << endl;
			status(landing);
		}
		if ((planeno == 7) && (landing.isempty()))
		{
			b = false;
		}
		pstart = time(&pstart);
	}
	_getch();
}