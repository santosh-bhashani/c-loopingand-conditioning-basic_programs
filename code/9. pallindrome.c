//pallindrome
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a,rev=0;
    printf("ENTER A 5 DIGIT NUMBER : ");
    scanf("%d",&n);
    a=n;
    while(a!=0)
	{
	rev=rev*10+(a%10); //reverse of the number
	
    a=a/10;
	}
    if(rev==n) printf("NUMBER IS A PALINDROME");
    else printf("NUMBER IS NOT A PALINDROME");
    getch();
}
