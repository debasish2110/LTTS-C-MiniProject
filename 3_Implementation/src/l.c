#include<stdio.h>
main()
{ 
    int n,i,c;
    int a=1;
    int b=1;
    printf("upto where you print series");
    scanf("%d",n);
    for (i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        
        printf("%d",c);   	
    }
}
