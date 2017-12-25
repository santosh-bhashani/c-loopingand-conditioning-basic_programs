//print a triangle base upside made of numbers 2
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1 ,j=1;
	
	for(i=1;i<=5;i++) 
	{
	for (j=1;j<=(6-i);j++)
	{printf("%d",j);
	}
	printf("\n");
	}
	getch();
}
