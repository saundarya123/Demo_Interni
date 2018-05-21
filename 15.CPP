/*******************************************
Statement - Addition of two number
Programmer - Vineet Choudhary
Written For - https://turboc.codeplex.com
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	int val, sum=0;
	clrscr();
	for(val=0;val<=5;val++)
	{
	sum=sum+val;
	}
	printf("sum is=%d",sum);
	getch();
}