//print nn natural numbers  along with their squares
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1 ;
	printf("enter the number n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{printf("%d : %d\n",i,i*i);
	}

	getch();
}
