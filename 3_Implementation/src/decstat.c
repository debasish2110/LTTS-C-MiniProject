#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
#define SIZE 10
void If_and_Else_Statements();
void Break_and_Continue_Statements();
void Goto_and_Switch_Statements();
void Decision_Statements();
int Index();
void prgobac1();
void prgobac2();
void prgogass1();
void  prgogass2();	
void prgoiaes();
	void If_and_Else_Statements()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/If_and_Else_Statements.txt","r");
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
    	Decision_Statements();
	}
    else if(n==1)
	{
		system("cls");
		Break_and_Continue_Statements();
	}
	else if (n==2)
	{system("cls");
	prgoiaes();
	}
	fclose(p);
	}//end of if and else statements
	
	
	void prgoiaes()
	{

     /* local variable definition */
     int a = 100;
 
     /* check the boolean condition */
     if( a < 20 ) {
      /* if condition is true then print the following */
      printf("a is less than 20\n" );
      } else {
      /* if condition is false then print the following */
      printf("a is not less than 20\n" );
      }
        printf("value of a is : %d\n", a);
      printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }
 	}
	void Break_and_Continue_Statements()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Break_and_Continue_Statements.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic \n if you want to run code 1 so press 2 \n if you want to run code 2 so press 3");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	Decision_Statements();
	}
    else if(n==1)
	{
		system("cls");
		Goto_and_Switch_Statements();
	}
	else if (n==2)
	{
		system("cls");
		prgobac1();
	}
	else if (n==3)
	{
		system("cls");
		prgobac2();
	}
	fclose(p);
	}//end of break and continue statements
	void prgobac1()
	{
	char key;
   printf("Press E to exit:\n");
   while(1) {
      scanf("%c", &key);
      // if E or e, exit
      if (key == 'E' ||  key == 'e')
          break;
   }
   printf("Goodbye!\n");
  printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }
   }
   
   void prgobac2()
   {
   	int haystack[SIZE] = {1,2,3,4,5,6,7,8,9,0};
    int needle;
    printf("Enter a number (0-9) to see its position:");
    scanf("%d",&needle);
    int i;
    for (i = 0; i < SIZE; i++)
    {
        if (needle != haystack[i])
        {
            printf("Finding at position %d: %d\n", i, haystack[i]);
            continue;
        }
        printf("Number %d found at position %d\n", needle,i);
        printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }

    }
}
	
	void Goto_and_Switch_Statements()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Goto_and_Switch_Statements.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}int n;    
     printf("/npress 0 for index \n if you want to run code 1 so press 1  \n if you want to run code 2 so press 2");
     scanf("%d",&n);
	if (n==0)
	{
		system("cls");
		Index();
	}
	else if(n==1)
	{system("cls");
	  prgogass1();
	}
	else if(n==2)
	{system("cls");
       prgogass2();
	}
	fclose(p);
	}                                               //end of goto and switch staements      
	                                                //end of decision statements 
	
void prgogass1()
{
	
	
	const int maxInput = 5;
         int i;
    double number, average, sum=0.0;
    
    for(i=1; i<=maxInput; ++i)
    {
        printf("%d. Enter a number: ", i);
        scanf("%lf",&number);

    // If user enters negative number, flow of program moves to label jump
        if(number < 0.0)
            goto jump;

        sum += number; // sum = sum+number;
    }

    jump:

    average=sum/(i-1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f", average);
    printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }


}
 void prgogass2()
 
 {
	 	
 	int opt;
    int firstNumber,secondNumber;
    printf("Enter two operands");
    scanf("%d %d",&firstNumber, &secondNumber);
    printf("Enter an operator (1 for +,2 for  -,3 for  *,4 for  /)");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            printf("%d + %d = %d",firstNumber, secondNumber, firstNumber+secondNumber);
            break;

        case 2:
            printf("%d - %d = %d",firstNumber, secondNumber, firstNumber-secondNumber);
            break;

        case 3:
            printf("%d * %d = %d",firstNumber, secondNumber, firstNumber*secondNumber);
            break;

        case 4:
            printf("%d / %d = %d",firstNumber, secondNumber, firstNumber/firstNumber);
            break;

        // operator is doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
            printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }

    }
    

 }

