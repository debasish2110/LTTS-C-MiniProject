#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
void Formatted_Functions();
void Unformatted_Functions();
void Commonly_Used_Library_Functions();
void Input_and_Output();
int Index();
void prgoff();
void Formatted_Functions()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Formatted_Functions.txt","r");
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
    	Input_and_Output();
	}
    else if(n==1)
	{
		system("cls");
		Unformatted_Functions();
	}
	else if (n==2)
	{
		system("cls");
	    prgoff();
	}
	fclose(p);
	}//end of formatted functions
		void prgoff()
	{	
  
  char alphabh ='A';  
  int number1= 55;  
  float number2=22.34;  
  printf("char= %c\n",alphabh);  
  printf("int= %d\n",number1);  
  printf("float= %2f\n",number2);
  printf("press any key for  going to Index");   
	char i;
    if(scanf("%c",&i)=='i'){
   		Index();
   }
	}
	void Unformatted_Functions()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Unformatted_Functions.txt","r");
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
    	Input_and_Output();
	}
    else if(n==1)
	{
		system("cls");
		Commonly_Used_Library_Functions();
	}
	fclose(p);
	}//end of unformatted functions
	
	void Commonly_Used_Library_Functions()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Commonly_Used_Library_Functions.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}int n;    
     printf("/npress 0 for index");
     scanf("%d",&n);
     if (n==0)
	{
		system("cls");
		Index();
	}
	fclose(p);
	}
   	 //end of commonly used library functions                         //end of input and output
	