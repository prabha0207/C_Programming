#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
    clrscr();
    printf("Input any char : ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
	printf(" vowel.\n");
    }
    else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
	printf(" consonant.\n");
    }
    else
    {
	printf("The character is not an alphabet.\n");
    }
    getch();
   return 0;
}
