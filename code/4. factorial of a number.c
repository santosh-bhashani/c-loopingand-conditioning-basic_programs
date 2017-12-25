//factorial
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,fact=1;
    printf("ENTER A NUMBER : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("factorial = %d",fact);
	getch();
	
}
