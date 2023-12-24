#include<iostream>
#include"conversion1.cpp"
using namespace std;
int main(){
	conversion1 c;
	string expression;
	cout<<"\nenter infix expression :"<<endl;
	getline(cin,expression);
	string postfix=c.infix2Postfix(expression);
	cout<<"\npostfix conversion is:"<<postfix<<endl;
	int val=c.evaluatepostfix(postfix);
	cout<<"expression answer is :"<<val;
	
	getch();
}
