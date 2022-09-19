#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "headers.h"
char input[100];
int x,result;
int main(){
printf("$Welcome to AhmedFandes shell..\n");
while(1){
	printf("AhmedFandes shell>>");
	scanf("%s",input);
	if(strcmp(input,"exit")==0)
	{
		printf("Good bye :)\n$");
		break;
	}
	if(strcmp(input,"rand")==0)
	{
	
		printf("%d\n",rand());
		continue;
	}
	if(strcmp(input,"fact")==0)
	{
	printf("Enter a number: ");
	scanf("%d",&x);
	result=fact(x);
	printf("\nResult is: %d\n ",result);
	continue;
	}
	if(strcmp(input,"fib")==0)
	{
		printf("Enter the number of terms : ");
		scanf("%d",&x);
		fib(x);
		printf("\n");
	}	
	else
	{
		printf("You said: %s \n",input);
	}

	}		
}
