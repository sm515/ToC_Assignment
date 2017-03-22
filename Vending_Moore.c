//Question 3. 
//Implemented an embedded system for a vending machine using a Mealy machine.
//The states are :
// 0 ---> Start state. (No output)
// 1  output ---> coke
// 2  output ---> coffee
// 3  output ---> tea
//assuming Coke, cofee and tea cost $1
#include<stdio.h>
int currentState=0;
void stateTransition(char input);
void main()
{
   char choice;
   char ch = 'y';
   while(ch=='y')
   {
   		currentState= 0;
   		printf("please insert $1.\n" );
   		printf("a. coke\n");
		printf("b. coffee\n");
		printf("c. Tea\n");
		printf("Enter option.===");
		scanf(" %c",&choice);
		stateTransition(choice);
		printf("\n");
		printf("Do you wish to order another drink?(y/n)\n");
   		scanf(" %c",&ch);

   }

}
void stateTransition(char input,int State)
{
	if(State == 0)
	{
		if(input=='a')
		{
			currentState = 1;
			printf(" pouring one glass of  coke  ");
		}
		else if(input=='b')
		{
			currentState = 2;
			printf(" pouring one hot cup of coffee");
		}
		else if(input=='c')
		{
			currentState = 2;
			printf(" pouring one tea right up. ");
		}
	}
	if(State == 1)
	{
		if(input=='a')
		{
			currentState = 1;
			printf(" pouring one glass of  coke  ");
		}
		else if(input=='b')
		{
			currentState = 2;
			printf(" pouring one hot cup of coffee");
		}
		else if(input=='c')
		{
			currentState = 2;
			printf(" pouring one tea right up. ");
		}	
	}
	if(State == 2)
	{
		if(input=='a')
		{
			currentState = 1;
			printf(" pouring one glass of  coke  ");
		}
		else if(input=='b')
		{
			currentState = 2;
			printf(" pouring one hot cup of coffee");
		}
		else if(input=='c')
		{
			currentState = 2;
			printf(" pouring one tea right up. ");
		}	
	}
	if(State == 3)
	{
		if(input=='a')
		{
			currentState = 1;
			printf(" pouring one glass of  coke  ");
		}
		else if(input=='b')
		{
			currentState = 2;
			printf(" pouring one hot cup of coffee");
		}
		else if(input=='c')
		{
			currentState = 2;
			printf(" pouring one tea right up. ");
		}	
	}

}
