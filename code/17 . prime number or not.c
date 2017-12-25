//number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=1,count=0;
	printf("ENTER THE NUMBER : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{if(n%i==0)  count++;
	else count=count;
	}
	if(count==0) printf("NUMBER IS PRIME");
	else printf("NUMBER IS NOT PRIME");
	getch();
	
}
