/*******************************************
Statement - Addition of two number
Programmer - Vineet Choudhary
Written For - https://turboc.codeplex.com
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{ clrscr();
char ch;
printf("Enter anything");
scanf("%c",&ch);
switch(ch)
{
case'a':
case'A':
case'e':
case'E':
case'i':
case'I':
case'o':
case'O':
case'u':
case'U':
printf("\nThis is a vowel");
break;
default:
printf("This is not  a vowel");
}
getch();
}
