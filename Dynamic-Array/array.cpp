#include<iostream>
#include"Array.h"
using namespace std;
array::array(){
	p=NULL;
	max=0;
	counter=0;
	
}
array::array(int x){
	max=x;
    p=new int[max];
	p1=NULL;
	counter=0;
}


bool array::isvalid(){
	if(p==NULL){
	
	return false;
}
else{
  return true;
}
}


bool array::isempty(){
	if(counter==0){
		return true;
		
	}
	else{
		return false;
	}
}


bool array::isfull(){
	if(counter==max){
		return true;
		
	}
	else{
		return false;
	}
}




void array::printarray(){
	for(int i=0;i<counter;i++){
		cout<<p[i]<<" ";
	}
}



void array::insertinorder(int x){
	
	                       //sorting code
                                      //chck index where its going to be fit
									  
p[counter++]=x;	
if(counter>=(0.95*max)){
		growth();
}              
	
	}
	
	
void array::sort(){
	int temp;
	for(int i=0;i<counter-1;i++){
		for(int j=0;j<counter-1;j++){
			if(p[j]>p[j+1]){
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}	

int array::getsize(){
	return counter;
}
int array::maxsize(){
	return max;
}

bool array::insertat(int index,int value){
	bool flag=false;
	
if(isvalid()&&!isfull()){
	
if(index>max){
	cout<<"array out of index"<<endl;
	return false;
}	
	
else{
	
	for(int i=counter;i>index;i--){
		p[i]=p[i-1];
	}
	flag=true;
	p[index]=value;
	counter++;
	
}
	
	}
if(counter>=(0.95*max)){
growth();
}
return flag;
}
	
	

	
bool array::DeleteAt(int index){

	if(isvalid()&&!isempty()){
		if(index>max){
	    cout<<"array out of index"<<endl;
	    return false;
     }
	
	else{
				
		for(int i=index;i<counter;i++){
			
			p[i]=p[i+1];
		}
		counter--;
	return true;
	}
	
	
}
if(counter<=(0.40*max)){
		shrink();
	}
	
}



bool array::growth() {

	p1 = new int[max];
	for (int i = 0; i < counter; i++) {        //frst p1
	                                          //p1 mn p ki value 
		p1[i] = p[i];                          //delete p aur new p aur p1 ki value store ki lkn double size sy aur p1 ko delete
	}
	delete p;
	max*=2;
	p = new int[max];
	for (int i = 0; i < counter; i++) {
		p[i] = p1[i];
	}
	delete p1;
	//max*=2;
	return true;



}



	//p1=new int[max];
	//copy p1 all element p
	//delete p
	//p=new int[max*2]
	//copy back p1
	//delete p1


bool array::shrink(){
	if(isvalid()){
	p1 = new int[max];
	for (int i = 0; i < counter; i++) {
		p1[i] = p[i];
	}
	delete p;
	p = new int[max/2];
	for (int i = 0; i < counter; i++) {
		p[i] = p1[i];
	}
	delete p1;
	max/=2;
	return true;
	
	
}
else 
  return false;
}

bool array::DeleteLast(){
	if(counter<=(0.40*max)){
		shrink();
	}
	if(isvalid()&&!isempty()){
		
		DeleteAt(counter-1);
		
		return true;
	}
	
}
bool array::searchanddelete(int x){
	if(counter<=(0.40*max)){
		shrink();
	}
if(isvalid()&&!isempty()){
		for(int i=0;i<counter;i++){
		if(p[i]==x){
		DeleteAt(i);	
		}
	}
	return true;
}
}
