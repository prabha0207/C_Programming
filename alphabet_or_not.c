#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
    clrscr();
    printf("Input any char : ");
    scanf("%c", &ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
	printf(" alphabet\n");
    }
    else
    {
	printf("The character is not an alphabet.\n");
    }
    getch();
   return 0;
}


/* s
   alphabet
   */
