#include <stdio.h>
 
int main()
{
  int year;
 
  printf("Enter a year to check if it is a leap year\n");
  scanf("%d", &year);
 
  if (year%400 == 0)
    printf("leap year \n");
  else if (year%100 == 0)
    printf(" non leap year\n");
  else if (year%4 == 0)
    printf("leap year.\n");
  else 
    printf("non  leap year \n");  
   
  return 0;
}


/*1998 
non leap yr */
