/*******************************************
Statement - Addition of two number
Programmer - Vineet Choudhary
Written For - https://turboc.codeplex.com
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	printf("%d Sum of entered numbers = %d\n",i,i%2);
	getch();
}