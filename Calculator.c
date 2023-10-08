#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(){

//Declaring a variable Calculator so it can be used to check if the user wants to perform operations
	bool Calculator=false;
	//Option variable for checking the user choice
	char Opt;
	printf("Do you want to use calculator y for yes n for no?\n");
	scanf("%c",&Opt);
	
	//Condition to check if the yes is answer 
	
	if(Opt=='y'){
		//Assigning the value true if the user answers yes
		Calculator=true;
		
		//Loop for performing functions untill the user wants to 
		while(Calculator){
		 int Choice1;
		 printf("Select Operation you want use and type the number of operation you want to use\n");
		 printf("1)Addition\n");
		 printf("2)Subtraction\n");
		 printf("3)Multiplication\n");
		 printf("4)Division\n");
		 printf("5)Cheching the remainder\n");
		 printf("6)Want table of this value\n");
		
		 scanf("%d",&Choice1);
		
		 if(Choice1 >=1 && Choice1 <=5){
			double FirstNumber,SecondNumber,Result;
			printf("Enter First Number\n");
			scanf("%lf",&FirstNumber);
			printf("Enter Second Number\n");
			scanf("%lf",&SecondNumber);
			
			if(Choice1==1){
				Result=FirstNumber+SecondNumber;
				printf("Result is=%lf\n",Result);
			} else if(Choice1==2){
				Result=FirstNumber-SecondNumber;
				printf("Result is=%lf\n",Result);
			} else if(Choice1==3)
			{
				Result=FirstNumber*SecondNumber;
				printf("Result is=%lf\n",Result);
			}else if(Choice1==4)
			{
				Result=FirstNumber/SecondNumber;
				printf("Result is=%lf\n",Result);
			}else if(Choice1==5)
			{
				Result= fmod(FirstNumber,SecondNumber);
				printf("Result is =%lf",Result);
			}else{
				printf("Not cORRECT Option");
			}
	}else if(Choice1==6)
	{
			double OnlyNumber,Result,Table;
			printf("Enter The number\n");
			scanf("%lf",&OnlyNumber);
			for(Table=1;Table<=10; Table++){
				Result=	OnlyNumber*Table;
				printf("%.2lf*%.2lf=%.2lf\n",OnlyNumber,Table,Result);
			}
	
	}
	else{
		printf("not valid");
	}
	printf("Do yo want to continue y or n");
	scanf("%c",&Opt);
	if(Opt=='n'){
		Calculator=false;
		printf("Bye!");
	}
	}
}
	
	else{
		("Bye bye!");
	}
	return 0;
}
	
