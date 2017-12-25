//sum of square of n natural numbers using for , while and do while loops
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1 ,sum=0;
	printf("enter the number n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{sum=sum+i*i;
	}
	printf("%d \t",sum);
	i=1;sum=0;
	while(i<=n)
	{sum=i*i+sum;
	i++;
	}
	printf("%d \t",sum);
	i=1;sum=0;
	do {sum=sum+i*i;
	i++;
	}while(i<=n);
	printf("%d \t",sum);
	getch();
}
