//sum of positive numbers using break statement when user puts a negative number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a,sum=0;
	
	while(1)
	{
		printf("ENTER POSITIVE NUMBER : ");
		scanf("%d",&a);
		if(a<0) break;
		else sum=sum+a;
	}
	printf("sum of positive numbers : %d",sum);
}
