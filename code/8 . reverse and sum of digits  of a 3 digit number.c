//reverse of 3 digtis of a  digit number
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,sum=0,rev=0;
    printf("ENTER A 3 DIGIT INTEGER  : ");
    scanf("%d",&a);
    while(a!=0)
	{
	rev=rev*10+(a%10); //reverse of the number
	sum=sum+(a%10); //sum of the digits
    a=a/10;
	}
    printf("sum of digits : %d  \n REVERSE OF THE NUMBER : %d",sum,rev);
    getch();
}
