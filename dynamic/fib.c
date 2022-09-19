#include<stdio.h>
void fib(int num)
{
int i=0,t1=0,t2=1,NextTerm=0;
printf("\nThe sequence is : ");
for(i=0;i<=num;i++)
{
if(i==0)
{
printf("0,");
continue;
}
if(i==1)
{
printf("1");
continue;
}
NextTerm=t1+t2;
t1=t2;
t2=NextTerm;
printf(",%d",NextTerm);
}
}
