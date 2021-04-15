#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
//#include<process.h>
void Array_Declaration();
void Array_Initialization();
void Array_Terminology();
void One_Dimensional_Array();
void Two_Dimensional_Array();  
int Index();
void Array();
void prgotda();
void prgooda();
void Array_Declaration()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Array_Declaration.txt","r");
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
    	Array();
	}
    else if(n==1)
	{
		system("cls");
		Array_Initialization();
	}
	fclose(p);
	}//end of array declaration
	void Array_Initialization()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Array_Initialization.txt","r");
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
    	Array();
	}
    else if(n==1)
	{
		system("cls");
		Array_Terminology();
	}
	fclose(p);
	}//end of array initialization
	void Array_Terminology()
      {
	  system("cls");
   	  FILE *p;
	  char a[500];
	 p=fopen("src/text_src/Array_Terminology.txt","r");
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
    	Array();
	}
    else if(n==1)
	{
		system("cls");
	     One_Dimensional_Array();
	}
	fclose(p);
	}// end of arrray terminlology
	
	void  One_Dimensional_Array()
    
	  {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/One_Dimensional_Array.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
   	 int n;    
     printf("/npress 0 for chapter outline \n press 1 for next topic \n if yuo want to run this code so press 2");
     scanf("%d",&n);
     if(n==0)
    {system("cls");
    	Array();
	}
    else if(n==1)
	{
		system("cls");
		Two_Dimensional_Array();
	}
	else if (n==2)
	{  system("cls");
	prgooda();}
	fclose(p);
	}//end of 1 -d array
	
	void prgooda()
	{
	int i,numbers[5];
    printf("Enter 5 number \n");
    for(i=0;i<5;i++)
	scanf("%d",&numbers[i]);
	printf("Array elements are \n");
	for(i=0;i<5;i++)
	printf("%d\n",numbers[i]);
	printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }
	}
	void  Two_Dimensional_Array()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Two_Dimensional_Array.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}int n;    
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
		prgotda();
	}
	fclose(p);
	}
   	 //end of 2-d array                                                     // end of array
	void prgotda()
	{
		  /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }	printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }
	}