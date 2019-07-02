#include <stdio.h> 
 
 int main() { 
  // your code goes here 
   int s, reverse=0;
   printf("\n");
   scanf("%d",&s);
   while(s!=0)
   {
     reverse=reverse*10;
     reverse=reverse+s%10;
     s=s/10;
   }
   printf("%d",reverse);
   return 0;
 }
 
 
 /* 456
 654*/
