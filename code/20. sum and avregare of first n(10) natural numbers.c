//sum and average of first n natural numbers  using for , while and do while loops(can be used for first 10 natural numbers too)
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1 ,sum=0;
	float avg;
	printf("enter the number n :");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{sum=sum+i;
	}
	printf("%d \t",sum);
	avg=(float)sum/(float)n;
	printf("avg=%f",avg);
	getch();
}
