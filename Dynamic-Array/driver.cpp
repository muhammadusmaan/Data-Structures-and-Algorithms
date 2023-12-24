#include<iostream>
#include"array.cpp"
#include<string>
using namespace std;
void dashboard(){
	cout<<"\n1)enter elements "<<endl;
	cout<<"\n2)Print array"<<endl;
	cout<<"\n3)Array Length"<<endl;
	cout<<"\n4)check array is valid"<<endl;
	cout<<"\n5)check array is empty or not "<<endl;
	cout<<"\n6) check array whether it is full or not"<<endl;
	cout<<"\n7) insert value at specific index"<<endl;
	cout<<"\n8)delete at particular index"<<endl;
	cout<<"\n9)delete the last one "<<endl;
	cout<<"\n10)search and delete"<<endl;
	cout<<"\n11)Array size"<<endl;
}
int main(){
	cout<<"\n**************for start your program first give size of array *****************"<<endl;
	int x;
	cout<<"\nEnter Size of array:"<<endl;
	cin>>x;
    array a(x);
 	char key;
   do{
   	int n;
   	dashboard();
   
   
   	cout<<"\nenter option :"<<endl;
   	cin>>n;
   	switch(n){
   	case 1:
   		int num;
   		cout<<"Enter the value for stop press 0"<<endl;
   		cin>>num;
   		while(num!=0){
   			a.insertinorder(num);
   			cin>>num;
		   }
		   char answer;
		   cout<<"do want to sort ?";
		   cin>>answer;
		   if(answer=='y'||answer=='y'){
		   a.sort();
		}else{
			cout<<"ok as u wish!"<<endl;
		}
   			break;
   			
   	case 2:
   				a.printarray();
   		       break;
   	case 3:
   		       	int f;
				f=a.getsize();
   		       	cout<<"\nSize of an array is :"<<f;
   		       	break;
   		       	
   	          case 4:
   	          	bool b;
   	          	b=a.isvalid();
   	          	if(b){
   	          		cout<<"\nValid array"<<endl;
					 }
				else{
					cout<<"\nnot valid array"<<endl;
				}
   		       	break;
   	case 5:
	   bool c;
	   c=a.isempty();
	   if(c){
	   	cout<<"\nArray is empty"<<endl;
	   }
	   else{
	   	cout<<"\nArray is not empty"<<endl;
	   }	       	
			break;	
	case 6:
	     bool d;
		 d=a.isfull();
		 if(d){
		 	cout<<"\narray is full"<<endl;
		 }
		 else{
		 	cout<<"\narray is not full"<<endl;
		 	
		 }	
		 break;	
	case 7:
		bool p;
		int index,value;
	     cout<<"\nEnter index :"<<endl;
		 cin>>index;
		 cout<<"\nEnter value :"<<endl;
		 cin>>value;
		 p=a.insertat(index,value);
		 if(p){
		 	cout<<"elelment inserted"<<endl;
		 }
		 break;
		 
		 case 8:
		 	int indi;bool p;
		 	cout<<"\nenter the index"<<endl;
		 	cin>>indi;
		 	p=a.DeleteAt(indi);
		 if(p){
		 		cout<<"\nelement deleted!"<<endl;
			 }
			 
		 	 	  break;
		case 9:
		    a.DeleteLast();
			break;	
			case 10:
			int element;
			cout<<"Enter element to delete"<<endl;
			cin>>element;
			bool y;
			y=a.searchanddelete(element);
			if(y){
				cout<<"element got search and deleted"<<endl;
			}
			else{
				cout<<"not found"<<endl;
			}			
			break;
			case 11:
				int m;
				m=a.maxsize();
				cout<<"\nmax size of array is:"<<m<<endl;
				break;
   		      default:
				 cout<<"\nNo command exist!"<<endl; 
	   }
	  cout<<"\nDo u want to interact again?"<<endl;
	  cin>>key;
   }while(key=='Y'||key=='y');  

}
