
#include <stdio.h>

int main()
{
    int n,s,fact=1;
    printf("enter the number\n");
    scanf("%d",&n);
    for(s=1;s<=n;s++)
    {
        fact=fact*s;
    }
    printf("the fact %d=%d\n",n,fact);
    return 0;
}


/* 3
   6 */
