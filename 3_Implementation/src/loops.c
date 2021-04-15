#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
void For_and_Nested_For_loop();
void While_and_Do_While_loop();
int Index();
void Loops();
void prgofanfl();
void For_and_Nested_For_loop()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/For_and_Nested_For_loop.txt","r");
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
	     Loops();
	}
    else if(n==1)
	{
		system("cls");
		While_and_Do_While_loop();
	}
	else if(n==2)
	{
		system("cls");
		prgofanfl();
	}
	fclose(p);
	}//end of for and nested for loop
     void prgofanfl()	
	 {
   int a;
    	
    /* for loop execution */
   for( a = 10; a < 20; a = a + 1 ){
      printf("value of a: %d\n", a);
   }printf("press i for going to Index");
   char i;
   if(scanf("%c",&i)=='i'){
   		Index();
   }
}
	void While_and_Do_While_loop()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/While_and_Do_While_loop.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
		int n;    
     printf("/npress 0 for index");
     scanf("%d",&n);
     if (n==0)
	{
		system("cls");
		Index();
	}
	fclose(p);
	}
   	//end of while and do while loop                                             //end of loops
	