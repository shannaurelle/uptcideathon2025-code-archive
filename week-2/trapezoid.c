#include <stdio.h>

void secret_shape(int n)
{
   for(int i = 1; i <= n; i++)
   {
     for(int j = 1; j <= (i+(n>1)); j++)
     {
       printf("*");
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
