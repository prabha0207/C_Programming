#include<stdio.h>
#include<conio.h>
int main()
{
int m,y;
clrscr();
scanf("%d%d",&m,&y);
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
{
printf("31 days");
}
else if(((m==2)&&(m%4==0))||((m%100==0)&&(m%400==0)))
{
printf("29 days");
}
else if(m==2)
{
printf("28 days");
}
else
{
printf("30 days");
}
getch();
return 0;
}



/* 7
  2019
   
   
   31 days */
