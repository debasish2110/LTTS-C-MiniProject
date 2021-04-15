#include<stdio.h>
#include<stdlib.h>
//#include<process.h>
#include<string.h>
void Declaration_and_Initialization_of_Strings();
void String_Standard_Functions();
void Applications_of_Strings();
int Index();
void String();
void prgoaos();
void String();
void Declaration_and_Initialization_of_Strings()
	
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Declaration_and_Initialization_of_Strings.txt","r");
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
    	String();
	}
    else if(n==1)
	{
		system("cls");
		String_Standard_Functions();
	}
	fclose(p);
	}//end of declaration and initialization of strings
	void  String_Standard_Functions()
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/String_Standard_Functions.txt","r");
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
    	String();
	}
    else if(n==1)
	{
		system("cls");
		Applications_of_Strings();
	}
	fclose(p);
	}//end of string Standard Functions
	void Applications_of_Strings()
	      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Applications_of_Strings.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
		int n;
		printf("\n if you want to run this code so press 1");    
     printf("\n press 0 for index");
     scanf("%d",&n);
     if (n==1)
     { system("cls");
     prgoaos();     	
	 }
	
	else if (n==0)
	{
		system("cls");
		Index();
	}
	
	fclose(p);
	}
	
   	//end of application of string            // end of string
   	void prgoaos()
   	{
   		
   	
		/*
    * C program to read a string and check if it's a palindrome, without
    * using library functions. Display the result.
    */
    char string[25], reverse_string[25] = {'\0'};
    int  i, length = 0, flag = 0;
 
    fflush(stdin);
    printf("Enter a string \n");
    gets(string);
    /*  keep going through each character of the string till its end */
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
    for (i = length - 1; i >= 0; i--)
    {
       reverse_string[length - i - 1] = string[i];
    }
    /*
     * Compare the input string and its reverse. If both are equal
     * then the input string is palindrome.
     */
    for (i = 0; i < length; i++)
    {
        if (reverse_string[i] == string[i])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("%s is a palindrome \n", string);
    else
        printf("%s is not a palindrome \n", string);
        
        printf("\n\npress i for going to Index");
   char c;
    if(scanf("%c",&c)=='i'){
   		Index();
   }
	}
	
	
	   