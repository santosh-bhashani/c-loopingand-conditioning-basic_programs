//6. take numbers from user and print the list of positive and negative numbers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i;
	printf("ENTER number of inputs you want  : ");
	scanf("%d",&a);
	int inputs[a];
	for(i=0;i<a;i++)
	{
		printf("ENTER number : ");
		scanf("%d",&inputs[i]);
		
	}
	printf("list of positive numbers  -> ");
	for(i=0;i<a;i++)
	{
		if(inputs[i]>0)
			printf("%d,",inputs[i]);
		else
			printf("");
		
	}
	printf("\nlist of negative numbers  -> ");
	for(i=0;i<a;i++)
	{
		if(inputs[i]<0)
			printf("%d,",inputs[i]);
		else printf("");
		
	}
	printf("\nlist of 0  -> ");
	for(i=0;i<a;i++)
	{
		if(inputs[i]==0)
			printf("%d,",inputs[i]);
		else printf("");
	}
	getch();
}
	
	

