//sum of n natural numbers  using for , while and do while loops
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1 ,sum=0;
	printf("enter the number n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{sum=sum+i;
	}
	printf("%d \t",sum);
	i=1;sum=0;
	while(i<=n)
	{sum=i+sum;
	i++;
	}
	printf("%d \t",sum);
	i=1;sum=0;
	do {sum=sum+i;
	i++;
	}while(i<=n);
	printf("%d \t",sum);
	getch();
}
