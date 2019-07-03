#include <stdio.h> 
 
 int main() { 
  // your code goes here 
   int n,reverse=0,t;
   printf("\n");
   scanf("%d",&n);
   t=n;
   while(t!=0)
   {
     reverse=reverse*10;
     reverse=reverse+t%10;
     t=t/10;
   }
   if(n==reverse)
     return 1;
   else
   return 0;
 }
   
/* 727
  727  */
  /*palindrome*/
