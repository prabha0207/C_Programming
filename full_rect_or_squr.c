#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a,b;
clrscr();
printf("enter the value");
scanf("%d%d",&a,&b);
for(i=0;i<=a;i++)
{
for(j=1;j<=b;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
/* 4 3
 ***
 ***
 ***
 *** */
 
 /* j=0
 4 3
 ****
 ****
 ****
 ****
 **** */
