//C program to read a number and print prime numbers up to that number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,count=0;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	printf("prime numbers->\t");
	
	for(i=2;i<=n;i++)
	
	{count=0;
	for(j=2;j<i;j++)
	{if(i%j==0)  count=count+1;
	else count=count;
	}
	if(count==0) printf("%d\t",i);
	}
	
	getch();
	
}
