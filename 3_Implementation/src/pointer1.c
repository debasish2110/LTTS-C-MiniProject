#include<stdio.h>

int main()
{
    int shivam=19;
	printf("address           \t name    \t value \n");
     printf("%p      \t %s \t %d \n", &shivam ,"shivam",shivam);
                                                    
     int *pshivam= &shivam;                                 
     printf("%p      \t %s \t %d \n", pshivam ,"shivam",shivam);
       printf("%p      \t %s \t %p \n", &pshivam ,"pshivam",pshivam);
      printf(" *pshivam = %d" , *pshivam);
	   *pshivam=8828;
	   printf(" *pshivam = %d" , *pshivam);
	   printf(" shivam = %d" , shivam);
//getch();	                                                 
}                   
                                 