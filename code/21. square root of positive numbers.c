#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a;
	printf("ENTER THE POSITIVE NUMBER : ");
	scanf("%d",&a);
	if(a>=0)printf("square root of %d : %f",a,sqrt(a));
	else printf("invalid input");
	getch();
}
