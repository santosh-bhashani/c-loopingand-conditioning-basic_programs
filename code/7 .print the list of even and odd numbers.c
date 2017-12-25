//7. take numbers from user and print the list and count of odd and even numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,count=0;
	printf("ENTER number of inputs you want  : ");
	scanf("%d",&a);
	int inputs[a];
	//taking numbers
	for(i=0;i<a;i++)
	{
		printf("ENTER number : ");
		scanf("%d",&inputs[i]);
		
	}
	//odd number for loop
	printf("list of odd numbers -> ");
	for(i=0;i<a;i++)
	{
		if(inputs[i]%2!=0)
		{
		
			printf("%d,",inputs[i]);
			count=count+1;}
		else
			printf("");
		
	}
	printf("\nTOTAL NUMBER OF ODD NUMBERS = %d",count);
	//even number
	count=0;
	printf("\nlist of even numbers  -> ");
	for(i=0;i<a;i++)
	{
		if(inputs[i]%2==0)
		{
			count=count+1;
			printf("%d,",inputs[i]);}
		else printf("");
		
	}
	printf("\nTOTAL NUMBER OF EVEN NUMBERS = %d",count);
	

	getch();
}
	
	

