#include<iostream>
using namespace std;
class array{
	public:
	array();
	array(int x);
	void printarray();
	void sort();
	int maxsize();
    int  getsize();
	bool isvalid();
	bool isempty();
	bool isfull();
	bool insertat(int x,int v);
	void insertinorder(int x);
	bool DeleteAt(int n);
	bool DeleteLast();
	bool searchanddelete(int element);
	bool growth();
	bool shrink();
	protected:
		int *p,*p1,*p2;
	int max,size;
	int counter; // to get size of element
	
};
