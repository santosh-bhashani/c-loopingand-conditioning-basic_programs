//fbonacci
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,temp,n,i;
	printf ("ENTER A NUMBER UPTO WHIC FIBONACCI YOU WANT: ");
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	for(i=0;i<(n-2);i++)
	{	
		temp=b;
		b=a+b;
		a=temp;
		printf("%d\n",b);
	}
	getch();
	
}
