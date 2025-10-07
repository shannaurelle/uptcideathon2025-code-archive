#include <stdio.h>

void secret_shape(int n)
{
   for(int i = 1; i <= n; i++)
   {
     for(int j = 1; j <= n; j++)
     {
       if(j == 1 || i == n) printf("*");
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
