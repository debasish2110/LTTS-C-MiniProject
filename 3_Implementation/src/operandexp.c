#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
void Arithmetic_Operators();
void Suggestion();
void Relational_Operators();
void Logical_Operators();
void Bitwise_Operators();
void Operators_and_Expressions();
int Index();
void prgoao();
void prgobo();
void prgolo();
void prgoro();
void Arithmetic_Operators()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Arithmetic_Operators.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic \n if you want to run this code press 2");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	Operators_and_Expressions();
	}
    else if(n==1)
	{
		system("cls");
		Relational_Operators();
	}
	else if (n==2)
	{
		system("cls");
		prgoao();
	}
	fclose(p);
	}//end of arithmetic operator
	
	void prgoao()
	 {

   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   printf("Line 1 - Value of c is %d\n", c );
	
   c = a - b;
   printf("Line 2 - Value of c is %d\n", c );
	
   c = a * b;
   printf("Line 3 - Value of c is %d\n", c );
	
   c = a / b;
   printf("Line 4 - Value of c is %d\n", c );
	
   c = a % b;
   printf("Line 5 - Value of c is %d\n", c );
	
   c = a++; 
   printf("Line 6 - Value of c is %d\n", c );
	
   c = a--; 
   printf("Line 7 - Value of c is %d\n", c );
   printf("press any key for going to Index\n\n");
   char i;
    if(scanf("%c",&i)=='i'){
   		Index();
   }
}
	
	void Relational_Operators()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Relational_Operators.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic \n if you want to run this code so press 2");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	Operators_and_Expressions();
	}
    else if(n==1)
	{
		system("cls");
		Logical_Operators();
	}
	else if (n==2)
	{
		system("cls");
		prgoro();
	}
	fclose(p);
	}//end of relational operator
	void prgoro()
	{
		
		
       int a = 21;
       int b = 10;
       int c ;

       if( a == b ) {
      printf("Line 1 - a is equal to b\n" );
       } else {
      printf("Line 1 - a is not equal to b\n" );
        }
	
      if ( a < b ) {
      printf("Line 2 - a is less than b\n" );
      } else {
      printf("Line 2 - a is not less than b\n" );
       }
	
      if ( a > b ) {
      printf("Line 3 - a is greater than b\n" );
      } else {
      printf("Line 3 - a is not greater than b\n" );
      }
   
      /* Lets change value of a and b */
       a = 5;
       b = 20;
	
      if ( a <= b ) {
      printf("Line 4 - a is either less than or equal to  b\n" );
      }
	
       if ( b >= a ) {
       printf("Line 5 - b is either greater than  or equal to b\n" );
       }printf("press any key for going to Index\n\n");
   char i;
    if(scanf("%c",&i)=='i'){
   		Index();
   }
	}
	
	void Logical_Operators()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Logical_Operators.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic \n if you want to run this code so press 2");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	Operators_and_Expressions();
	}
    else if(n==1)
	{
		system("cls");
		Bitwise_Operators();
	}
	else if(n==2)
	{system("cls");
	prgolo();
	}
	fclose(p);
	}//end of logical operator 
	void prgolo()
	{
		
		int a = 5;
   int b = 20;
   int c ;

   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }
	
   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   } else {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   } printf("press any key for going to Index\n\n");
   char i;
    if(scanf("%c",&i)=='i'){
   		Index();
   }

	}
	
	void Bitwise_Operators()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Bitwise_Operators.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
		int n;    
     printf("/npress 0 for index \n if you want to run this code press 1");
     scanf("%d",&n);
	if (n==0)
	{
		system("cls");
		Index();
	}
	 else if(n==1)
	{
		system("cls");
		prgobo();

	}
	fclose(p);
	}// end of bitwise operator                                       //end of operator and expression
	
	void prgobo()

	 {

   unsigned int a = 60;	/* 60 = 0011 1100 */  
   unsigned int b = 13;	/* 13 = 0000 1101 */
   int c = 0;           

   c = a & b;       /* 12 = 0000 1100 */ 
   printf("Line 1 - Value of c is %d\n", c );

   c = a | b;       /* 61 = 0011 1101 */
   printf("Line 2 - Value of c is %d\n", c );

   c = a ^ b;       /* 49 = 0011 0001 */
   printf("Line 3 - Value of c is %d\n", c );

   c = ~a;          /*-61 = 1100 0011 */
   printf("Line 4 - Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - Value of c is %d\n", c );
    printf("press any key for going to Index\n\n");
   char i;
    if(scanf("%c",&i)=='i'){
   		Index();
   }
   }
   
   									
	
	
	
