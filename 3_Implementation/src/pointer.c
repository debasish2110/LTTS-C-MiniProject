#include<stdio.h>

int main()
{
	int ram=5;
	printf("%d\n",&ram);
	int *rampointer;
	printf("%d\n",ram);
   	 rampointer=&ram;
	 printf("%d\n",*rampointer);
	//cout << rampointer << endl;
	}