#include <stdio.h>

void secret_shape(int n)
{
   for(int i = 1; i <= (2*n-1); i++)
   {
     for(int j = 1; j <= (2*n-1); j++)
     {
       if(j == 1 || j == (2*n-1) || i==1 || i == (2*n-1)) printf("*");
       else printf(" ");
     }
     printf("\n");
   }
   printf("\n");
}

int main()
{
   int start = 1;
   int end = 5;
   for(int i = 1; i <= 5; i++)
   {
      secret_shape(i);
   }
   return 0;
}
