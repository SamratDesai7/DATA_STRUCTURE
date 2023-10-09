#include<stdio.h>
#include<conio.h>
void main()
{
	int no[50],size,i,sum=0;
	clrscr();
	printf("Enter the size of array :");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
	printf("no[%d]=",i);
	scanf("%d",&no[i]);
	}
	for(i=0;i<size;i++)
	{
	sum=sum+no[i];
	}
	printf("sum of array elements =%d",sum);
	getch();
}