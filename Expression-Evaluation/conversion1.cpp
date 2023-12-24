#include<iostream>
#include<iostream>
#include"conversion1.h"
#include<math.h>

		
int conversion1::gotprecendence(char op1,char op2){
	if(op1=='*'||op1=='/'||op1=='^'&&op2=='+'||op2=='-'){
		return -1;
	}
	if(op1=='+'||op1=='-'&&op2=='*'||op2=='/'||op2=='^'){
		return 1;
	}
}



bool conversion1::isoperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'){
		return true;
	}
	else{
		return false;
	}

}


bool conversion1::isoperand(char ch){
	if(!isoperator(ch)&&ch!='('&&ch!=')'&&ch>=00&ch<=99){
		return true;
	}
	else{
		return false;
	}
}



string conversion1::infix2Postfix(string e){
	stack<char>s;      //for operators;
	string expression="";  //for last expression;
	
	for(int i=0;i<e.length();i++){
		
		if(isoperand(e[i])){
			expression+=e[i];
		}
		
		else if(e[i]=='('){
			s.push(e[i]);
		}
		
		
		else if(e[i]==')'){
			
			while(!s.empty()){
				
			if(s.top()=='('){
				s.pop();
				break;
			}	
			expression+=s.top();
			s.pop();	
			}
			
		}
		
		
	else if(isoperator(e[i])){
		while(!s.empty()&&s.top()!='('&&gotprecendence(s.top(),e[i])<=0){
			expression+=s.top();
			s.pop();
		}
		s.push(e[i]);
	}	

		
	}
		while(!s.empty()){
		expression+=s.top();
		s.pop();
	}	
	
	
		return expression;
	
	
}
	



int conversion1::evaluation(int a,int b,char c){
	switch (c) {
		
		case'^':return pow(a,b);
      case '*': return b*a;
      case '/': return a/b;
      case '+': return a+b;
      case '-': return a-b;
      default : return 0;
   }
}

int conversion1::evaluatepostfix(string a){
	bool flag=false;
	stack<float>s;
	int value;
	for(int i=0;i<a.length();i++){
		
		if(isoperand(a[i])){
			s.push(a[i]-'0');
		}
		else if(a[i]==' ')
		   flag=false;
	else{
		
		int op2=s.top();
		s.pop();
		int op1=s.top();
		s.pop();
		value=evaluation(op1,op2,a[i]);
		s.push(value);   //aggain put the value;
	}	
		
		
	}
	return value;
}








