#include<stdio.h>
#include<conio.h>

void passbyrefrence(int *x);
void callbyvalue(int x);
main()
{
	int shivam=10;
	int shubham=8;
	callbyvalue(shivam);
	passbyrefrence(&shubham);
	printf("shivam is now=%d \nshubham is now =%d \n",shivam,shubham);
}
void callbyvalue(int x)
{
	x=99;
}
void passbyrefrence(int *x)
{
	*x=66;
}
//printf("%d%d",*x,x);