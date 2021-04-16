#include<stdio.h>
#include<stdlib.h>
#include"src/suggestion.c"
#include"src/intro.c"
#include"src/cdec.c"
#include"src/operandexp.c"
#include"src/inandout.c"
#include"src/decstat.c"
#include"src/loops.c"
#include"src/array.c"
#include"src/string.c"


//including the functions used in main function.

#include"inc/myHeader.h"

void main()                                                   // starting of main
{
	system("color 0A");
	system("cls");
	int choice;
	printf("\n 1 for Cover Page");
	printf("\n 2 for Index");
	printf("\nenter your choice");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:	Cover_Page();
	 	break;
	    case 2:Index();
	    break;
	    default: printf("invalid input");
	}//end of switch
   }                                                 //end of main  
	  int Cover_Page()                          // starting of cover page
      {
	  system("cls");
      FILE *p;
	 char a[200];
	 p=fopen("src/text_src/Cover_Page.txt","r");
		while(!feof(p))
		{
	    fgets(a,200,p);
		printf("%s\n",a);
		}
	int n;
	printf("going proceed press 1 for index page: ");
	scanf("%d",&n);
	if(n==1)
		{system("cls");
		Index();
		}
	fclose(p);
	return 0;
    }                                                      //end of cover page
    int Index()                                       //starting of index
    {
    	system("cls");
    	FILE *p;
    	char a[200];
    	p=fopen("src/text_src/Index.txt","r");
    	while(!feof(p))
    	{
    		fgets(a,200,p);
    		printf("%s\n",a);
    			}                                                  //end of index page
    		 
    	    int choice;
    		printf("enter your choice");
    		scanf("%d",&choice);
    		switch (choice)
    		{
    			case 1:Introduction();
    			break;
    			case 2:C_Declaration();
    			break;
    	        case 3:Operators_and_Expressions();
    			break;
    			case 4:Input_and_Output();
    			break;
    			case 5:Decision_Statements();
                break;
                case 6:Loops();
                break;
                case 7:Array();
                break;
                case 8:String();
                break;
                case 9:Suggestion();
                printf("\nTHank You");
				break;
				default:printf("invalid input");
				//getch();
				Index();
			}       //end of switch
fclose(p);
return 0;			
}                                                              //end of index function
			void Introduction()                               //starting of introduction
 			      {
	  
	  system("cls");
	  FILE *p;
	 char a[1000];
	 p=fopen("src/text_src/Introduction.txt","r");
		while(!feof(p))
		{
		fgets(a,1000,p);
		printf("%s\n",a);
        }   
	int choice,n;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	  switch (choice)
	  {	
	    case 0: Index();
        break;
	    case 1: The_First_C_Program();
	  	break;
	  	case 2: Header_Files();
	  	break;
	  	case 3: Languages_in_C();
	  	break;
	  	case 4: Advantages_of_C();
	  	break;	
	  	default:  printf("invalid output ");    	
	     }
	fclose(p);
    }                                                                       //ending of introduction
	     void C_Declaration()                                                  // starting of c declaration
      {
	  system("cls");
   	  FILE *p;
	 char a[500];
	 p=fopen("src/text_src/C_Declaration.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
	int choice;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	 switch (choice)
	  {	
	    case 0:   Index();
        break;
		case 1:   The_C_Character_Set();
	  	break;
	  	case 2:   Type_of_Tokens();
	  	break;
		case 3:   Identifiers();
	  	break;
	  	case 4:    Data_Type();
	  	break;
	  	case 5:    Declaring_Variable();
		break;
		default:   printf("Invalid Output");	     
		 }
	fclose(p);
    }                                                                         // end of c declaration         
		void Operators_and_Expressions()                                              // starting of operators and expressions
      {
	  system("cls");
   	FILE *p;
	 char a[200];
	 p=fopen("src/text_src/Operators_and_Expressions.txt","r");
		while(!feof(p))
		{
		 fgets(a,200,p);
		printf("%s\n",a);
		}
	
	int choice;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	 switch (choice)
	  {	
	    case 0:  Index();
	    break;
        case 1:  Arithmetic_Operators();
	  	break;
	    case 2:  Relational_Operators();
	  	break;
	  	case 3:  Logical_Operators();
	  	break;
	  	case 4:  Bitwise_Operators();
	  	break;
	  	default:	printf("invalid input");
		  		 }
	fclose(p);
    }                                                           // end of operator and expression
    void Input_and_Output()                                            // starting of input and output
      {
	  system("cls");
      FILE *p;
	 char a[1000];
	 p=fopen("src/text_src/Input_and_Output.txt","r");
		while(!feof(p))
	 {
		fgets(a,1000,p);
		printf("%s\n",a);
			}
	int choice;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	 switch (choice)
	  {	
	    case 0:
        Index();
        break;
        case 1:   Formatted_Functions();
	  	break;
	  	case 2:   Unformatted_Functions();
	  	break;
	  	case 3:   Commonly_Used_Library_Functions();
	  	break;
	  	default:	 printf("invalid input");
		 }
	fclose(p);
    }                                                          //end of output and input
    void Decision_Statements()                                        // start of decision statements
      {
	  system("cls");
     FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Decision_Statements.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
	}
	
	int choice;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	 switch (choice)
	  {	
	    case 0:Index();
	    break;
	    case 1:If_and_Else_Statements();
	  	break;
	  	case 2:Break_and_Continue_Statements();
	  	break;
        case 3:Goto_and_Switch_Statements();
	  	break;    
	  	default:	 printf("invalid input");
	 }
	fclose(p);
    }                                                       //end of decision statements 
	
	void Loops()                                                           // start of loop statements
      {
	  system("cls");
      FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Loops.txt","r");
		while(!feof(p))
		{
	  fgets(a,500,p);
		printf("%s\n",a);
	}
	int choice;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	  switch (choice)
	  {	
	    case 0:  Index();
	    break;
	    case 1:For_and_Nested_For_loop();
	  	break;
	  	case 2:While_and_Do_While_loop();
	  	break; 
	  	default:	 printf("invalid input");
		 }
	fclose(p);
    }//end of loops
    
	
	void Array()                                                               // start of array
      {
	  system("cls");
   	 FILE *p;
	 char a[500];
	 p=fopen("src/text_src/Array.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
	}
	int choice;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	  switch (choice)
	  {	
	    case 0: Index();
	    break;
	    case 1: Array_Declaration();
	  	break;
	  	case 2: Array_Initialization();
	  	break;
	  	case 3: Array_Terminology();
	  	break;
	  	case 4: One_Dimensional_Array();
	  	break;
	  	case 5: Two_Dimensional_Array();
		break;		
		default:	 printf("invalid input");
	     }
	fclose(p);
    }//end of array
    
	
	void String()                                                           // start of string
      {
	  system("cls");
      FILE *p;
	 char a[500];
	 p=fopen("src/text_src/String.txt","r");
		while(!feof(p))
		{
		fgets(a,500,p);
		printf("%s\n",a);
		}
	int choice;
    printf("\n enter your choice");
	printf("\npress 0 for Index ");
	scanf("%d",&choice);
	 switch (choice)
	  {	
	    case 0: Index();
	    break;
	  	case 1: Declaration_and_Initialization_of_Strings();
	  	break;
	  	case 2: String_Standard_Functions();
	  	break;
	  	case 3: Applications_of_Strings();
	  	break;
	  	default:	 printf("invalid input");
		 }
	fclose(p);
    }//end of string
    
   	void Suggestion()                                               // starting of suggestion
   	{
	printf("\n enter your choice in which topic you want to add any thing");
	int choice,n;
	scanf("%d",&choice);
	switch(choice)
	{
	     case 1: Suggestion_in_Introduction();
		 break;
		 case 2: Suggestion_in_C_Declaration();
		 break;
		 case 3: Suggestion_in_Input_and_Output();
		 break;
		 case 4: Suggestion_in_Operators_and_Expressions();
		 break;
		 case 5: Suggestion_in_Decision_Statements();
		 break;
		 case 6: Suggestion_in_Loop(); 
		 break;
		 case 7: Suggestion_in_Array();
		 break;
		 case 8: Suggestion_in_String();
		 break;
		 default: printf("invalid input");
		 }
	printf("\n\n press 0 for go to Index\n\n");
	scanf("%d",&n);
	if (n==0)
	{
		system("cls");
		Index();
	}
}                                                   // end of suggestion

	

	
    	
    	
    	
	