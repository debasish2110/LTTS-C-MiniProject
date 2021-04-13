#include<stdio.h>
int func_intro(),funcdef(),retrn(),typefunc(),call();
int func_intro()
{
	FILE *qa;
	qa=fopen("func intro.txt","r+");
	if(qa==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(qa))
	{
		printf("%c",fgetc(qa));
	}
	return 0;
}
int funcdef()
{
	FILE *qb;
	qb=fopen("funcdef.txt","r+");
	if(qb==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(qb))
	{
		printf("%c",fgetc(qb));
	}
	return 0;
}
int retrn()
{
	FILE *qc;
	qc=fopen("retrn.txt","r+");
	if(qc==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(qc))
	{
		printf("%c",fgetc(qc));
	}
	return 0;
}
int typefunc()
{
	FILE *qd;
	qd=fopen("typefunc.txt","r+");
	if(qd==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(qd))
	{
		printf("%c",fgetc(qd));
	}
	return 0;
}
int call()
{
	FILE *qe;
	qe=fopen("call.txt","r+");
	if(qe==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(qe))
	{
		printf("%c",fgetc(qe));
	}
	return 0;
}