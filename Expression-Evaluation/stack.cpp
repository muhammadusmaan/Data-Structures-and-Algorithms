#include<iostream>
#include<stdlib.h>
using namespace std;
template<class t>
class stack{
public:
	t a[25];
	int top;

stack(){
	
	top=0;
}
  push(t x){
	if(!isfull());
	a[top++]=x;
}	
	
t  pop(){
	if(isempty());
	return a[--top];
	
}

bool isfull(){
	return top==25;

}	
	
bool isempty(){
	return !top;
}	
	
};






