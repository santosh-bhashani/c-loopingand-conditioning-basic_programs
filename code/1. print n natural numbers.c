//print nn natural numbers  using for , while and do while loops
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1 ;
	printf("enter the number n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{printf("%d \t",i);
	}
	i=1;
	while(i<=n)
	{printf("%d \t",i);
	i++;
	}
	i=1;
	do {printf("%d \t",i);
	i++;
	}while(i<=n);
	getch();
}
