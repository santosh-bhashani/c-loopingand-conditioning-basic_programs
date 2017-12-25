//find G.C.D AND L.C.M
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,gcd,lcm=0;
	printf("ENTER TWO NUMBERS");
	scanf("%d%d",&a,&b);
	//GCD LOOP	
	for(i=1;i<=a || i<=b;i++)
	{
	
	if(a%i==0 && b%i==0) gcd=i;
	else gcd=gcd;

	}
	//LCM LOOP
	for(i=1;1;i++)
	{
	
	if((a*b)%i==0 && i>=a && i>=b && i%a==0 && i%b==0) {lcm=i; break;}
	else lcm=lcm;

	}
	
    
    printf(" GCD : %d and LCM : %d",gcd,lcm);
    getch();
}
