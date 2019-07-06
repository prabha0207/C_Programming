
#include <stdio.h>

int main()
{
    int n;
    printf("num");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("even");
    }
    else if(n%2!=0)
    {
      printf("odd");  
    }
    else if (n<0)
    {
        printf("invalid");
    return 0;
    }
}


/* -5
invalid */
