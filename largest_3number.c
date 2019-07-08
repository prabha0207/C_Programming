#include <stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    clrscr();
    printf("Inputs: ");
    scanf("%d%d%d", &n1,&n2,&n3);
    if( n1>=n2 && n1>=n3 )
    {
    printf("n1");
    }
    if( n2>=n1 && n2>=n3 )
    {
    printf("n2");
    }
    if( n3>=n1 && n3>=n2 )
    {
    printf("n3");
    }
    getch();
   return 0;
}




/* 5 6 1
  n2  */
