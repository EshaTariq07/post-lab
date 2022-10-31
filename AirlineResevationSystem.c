#include<stdio.h>
int main(void){
	int array[99]={0};
	printf("Type 1 for \" first class\"\n");
	printf("Type 2 for \"Economy class\"\n");
	int i,a,select;
	for(i=0;i<99;i++){
		printf("select type of class: ");
	scanf_s("%d", &select);
	    if (select == 1) {
		printf("please select a seat number(1-30) ");
		scanf_s("%d", &a);
		if (a > 30) {
			printf("please enter apprpriate seat  num\n");
			scanf_s("%d", &a);
		}
		if (array[a] == 0) {
			printf("seat is available\n");
			printf("your request is accepted\nyour boarding pass is here\n");
			
			printf("======================================\n");
			printf("|| your seat number is : %d           ||\n",a);
			printf("|| you're travelling in first class  ||\n");
			printf("======================================\n");	
		}
	}
		if (select == 2) {
		printf("please select a seat number(31-100) ");
		scanf_s("%d", &a);
		if (a < 30) {
			printf("please enter apprpriate seat  num\n");
			i--;
			continue;
		}
		if (array[a] == 0) {
			printf("seat is available\n");
			printf("your request is accepted\nyour boarding pass is here\n");
			
			printf("======================================\n");
			printf("|| your seat number is : %d             ||\n",a);
			printf("|| you're travelling in economy class   ||\n");
			printf("======================================\n");	
		}
	}
           
	   array[a]=1;
			if (array[a] == 1)
                           	{
		printf("seat is booked\n");
             	}		
		

        //for the seating chart
	if(select==4){
		int j;
		for(j=0;j<99;j++){
			printf("%d",array[j]);
			
		}
		printf("\n");
	}
		//for exit
	if (select==3){
		break;
	}
}
}
