//print square of n natural numbers  using for , while and do while loops
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1 ;
	printf("enter the number n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{printf("%d \t",i*i);
	}
	getch();
}
