#include<stdio.h>
int fact(int num)
{
int i, res=1;
if( (num==0) || (num==1) )
{
	res=1;
}
else
{
for(i=num;i>1;i--)
{
	res=res*i;
}
}
return res;
}
