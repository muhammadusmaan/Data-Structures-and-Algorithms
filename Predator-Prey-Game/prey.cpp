#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

class prey{
public:
	char arr[20][20];
	int pred_col ;
		int pred_row;
		int prey_col ;
		int prey_row;	
	prey(){

	 pred_row = 4;
		 pred_col = 4;
		 prey_row = 7;
		 prey_col = 6;	
/*	for (int i = 0; i < 20; i++){
			for (int j = 0; j < 20; j++){

				 arr[i][j] = '-';}}
		 arr[pred_row][pred_col] = 'P';

		arr[prey_row][prey_col] = 'p';*/
	}

	int set_loc(){
	
for (int i = 0; i < 20; i++){
			for (int j = 0; j < 20; j++){

				 arr[i][j] = '-';}}
		 arr[pred_row][pred_col] = '$';

		arr[prey_row][prey_col] = 'p';
		
while(true){
	
	display();
	
            int rd=pred_row-prey_row;   
         int cd=pred_col-prey_col;
        

 if(rd==-3&&cd==-2){   
pred_col+=2;
prey_col+=1;	}
else if(rd==-3&&cd==-1){   
pred_col+=2;
	}

else if(rd==-3&&cd==1){   
pred_row+=2;
pred_col-=1;

prey_row+=1;	}

else if(rd==-2&&cd==0){   

pred_row+=2;
prey_col+=2;
	}

else if(rd==0&&cd==-2){ 
pred_col+=1;  
pred_row+=1;
prey_row+=2;
prey_col+=1;
	}

else if(rd==-1&&cd==-2){   
pred_row+=1;
prey_col+=2;	}

else if(rd==0&&cd==-4){   
pred_col+=2;
prey_col+=3;	}               

else if(rd==0&&cd==-5){   
pred_col+=1;
prey_col+=2;	}


else if(rd==0&&cd==-6){   
pred_col+=3;
prey_row+=1;	}


else if(rd==-1&&cd==-3){   
pred_col+=3;
prey_col-=2; 
}
else if(rd==-1&&cd==2){   
pred_row+=1;
prey_col-=3; 
}
else if(rd==0&&cd==5){   
pred_col-=2;
prey_col-=3;
	}
else if(rd==0&&cd==6){ 
pred_col-=2;
prey_col-=3;
}
else if(rd==0&&cd==7){ 
pred_col-=2;
prey_col-=3;
}

  else if(rd==0&&cd==8){ 
pred_col-=8;
prey_row-=3;
} 
else if(rd==3&&cd==0){ 
pred_row-=2;
prey_row-=3;
} 
else if(rd==4&&cd==0){ 
pred_row-=4;
prey_col+=3;
} 
else if(rd==0&&cd==-3){ 
pred_col+=1;
prey_col+=3;
} 


Sleep(1500);
system("CLS");

}
}

	void display()
	{	
		for (int k = 0; k < 20; k++){
			for (int l = 0; l < 20; l++){
 arr[k][l] = '-';
  arr[pred_row][pred_col] = '$';

		arr[prey_row][prey_col] = 'p';
				cout<<" "<<arr[k][l];
			}
			cout<<endl;
		}
	}

};


int main(){
	prey p;
	p.set_loc();

}

