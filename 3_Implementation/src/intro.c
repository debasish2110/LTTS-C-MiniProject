#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
void The_First_C_Program();
void Header_Files();
void Languages_in_C();
void Advantages_of_C();
void Introduction();
int Index();
void prgtfcp1();
void prgtfcp2();
 
	void The_First_C_Program()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/The_First_C_Program.txt","r");
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
    	Introduction();
	}
    else if(n==1)
	{
		system("cls");
		Header_Files();
	}
	else if(n==2)
	{system("cls");
	 prgtfcp1();
	}
	else if(n==3)
	{system("cls");
	void prgtfcp2();
	}
	fclose(p);
	}//end of the first c program    
	void prgtfcp1()
	{
	     printf("hello! C Programmers");
	     printf("\n\npress any key for going to Index");
   char i;
    if(scanf("%c",&i)=='i'){
   		Index();
   }
	 }
	void Header_Files()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Header_Files.txt","r");
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
    	Introduction();
	}
    else if(n==1)
	{
		system("cls");
		Languages_in_C();
	}
	fclose(p);
	}// end of header files
	    
	    void Languages_in_C()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Languages_in_C.txt","r");
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
    	Introduction();
	}
    else if(n==1)
	{
		system("cls");
		Advantages_of_C();
	}
	fclose(p);
	}// end of language in c
	
	  void Advantages_of_C()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Advantages_of_C.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for index ");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	Index();
	}
	fclose(p);
	}// end of advantages of C   
	