#include<stdio.h>
//#include<process.h>
#include<string.h>
#include<stdlib.h>
int Suggestion_in_Introduction(),Suggestion_in_C_Declaration(),Suggestion_in_Input_and_Output(),Suggestion_in_Operators_and_Expressions();
int Suggestion_in_Decision_Statements(),Suggestion_in_Loop(),Suggestion_in_Array(),Suggestion_in_String();
int Suggestion_in_Introduction()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_Introduction.txt","a");
	while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user in Introduction\n\n");
	p=fopen("src/text_src/Suggestion_in_Introduction.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;
}//end of intro suggestion

int Suggestion_in_C_Declaration()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_C_Declaration.txt","a");
		while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user in C Declaration\n\n");
	p=fopen("src/text_src/Suggestion_in_C_Declaration.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;
}// end of c declartin suggestion

int Suggestion_in_Input_and_Output()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_Input_and_Output.txt","a");
	while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user in Input and Output\n\n");
	p=fopen("src/text_src/Suggestion_in_Input_and_Output.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;
}// end of input and output sugesstion

int Suggestion_in_Operators_and_Expressions()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_Operators_and_Expressions.txt","a");
	while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user Operators and Expressions\n\n");
	p=fopen("src/text_src/Suggestion_in_Operators_and_Expressions.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;
}// end of operators and exprrss suggestion
int Suggestion_in_Decision_Statements()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_Decision_Statements.txt","a");
	while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user in Decision Statements\n\n");
	p=fopen("src/text_src/Suggestion_in_Decision_Statements.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;
}// end of decision statements suggestion
int Suggestion_in_Loop()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_Loop.txt","a");
	while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user in Loop\n\n");
	p=fopen("src/text_src/Suggestion_in_Loop.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;
}// end of loop suggestion
int Suggestion_in_Array()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_Array.txt","a");
	while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user in Array\n\n");
	p=fopen("src/text_src/Suggestion_in_Array.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;// end of array suggestion
}
int Suggestion_in_String()
{
	FILE *p;
	char c;
	p=fopen("src/text_src/Suggestion_in_String.txt","a");
	while(c!='.')
	{
		scanf("%c", &c);
		fputc(c,p);
	}
	fclose(p);
	printf("\n\nSuggestion by user in String\n\n");
	p=fopen("src/text_src/Suggestion_in_String.txt","r+");
	while(!feof(p))
	{
		printf("%c",fgetc(p));
	}
	return 0;
}// end of string


