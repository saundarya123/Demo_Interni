 /*******************************************
Statement - Addition of two number
Programmer - Vineet Choudhary
Written For - https://turboc.codeplex.com
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{       clrscr();
	int a,b,c,d;
	printf("Enter three numbers to add:");
	scanf("%d%d%d",&a,&b,&c);
	d= a+b+c;
	printf("Sum of entered numbers = %d",d);
	getch();

}