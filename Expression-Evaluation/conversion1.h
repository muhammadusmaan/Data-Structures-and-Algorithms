#include<iostream>
#include<stack>
#include<conio.h>
#include<string>
//#include"stack.cpp"
using namespace std;
class conversion1{
	public:
		string infix2Postfix(string expression);
		int gotprecendence(char a,char b);
		bool isoperator(char c);
		bool isoperand(char c);
		
		int evaluation(int op1,int op2,char opera);
		int evaluatepostfix(string e);
};
