#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>

void The_C_Character_Set();
void Type_of_Tokens();
void Data_Type();
void Identifiers();
void Declaring_Variable();
void C_Declaration();
int Index();
void prgodv();

void The_C_Character_Set()

      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/The_C_Character_Set.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	C_Declaration();
	}
    else if(n==1)
	{
		system("cls");
		Type_of_Tokens();
	}
	fclose(p);
	}//end of the c character set
	
	 void Type_of_Tokens()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Type_of_Tokens.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	C_Declaration();
	}
    else if(n==1)
	{
		system("cls");
		Identifiers();
	}
	fclose(p);
	}//end of type of tokens
	
	void Identifiers()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Identifiers.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	C_Declaration();
	}
    else if(n==1)
	{
		system("cls");
		Data_Type();
	}
	fclose(p);
	}//end of indentifiers
	 
	void Data_Type()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Data_Type.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	C_Declaration();
	}
    else if(n==1)
	{
		system("cls");
		Declaring_Variable();
	}
	fclose(p);
	}//end of datatype
	
	
	void Declaring_Variable()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Declaring_Variable.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for index \n if you want to run this code so press 1");
     scanf("%d",&n);
	if (n==0)
	{
		system("cls");
		Index();
	}
	else if (n==1)
	{   
	    system("cls");
		prgodv();
	}
	fclose(p);
	}//end of declaring variable                                                    //end of c declaration
	 void prgodv() 
{	 // Variable declaration:
   extern int a, b;
   extern int c;
   extern float f;

  {

   /* variable definition: */
   int a, b;
   int c;
   float f;
 
   /* actual initialization */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);
   printf("press any key for going to Index");
   char i;
    if(scanf("%c",&i)=='i'){
   		Index();
   }
}
}