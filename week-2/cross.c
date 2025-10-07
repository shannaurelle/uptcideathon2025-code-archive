#include <stdio.h>

void secret_shape(int n)
{
   for(int i = 1; i <= (2*n-1); i++)
   {
     for(int j = 1; j <= (2*n-1); j++)
     {
       if(i == n || j == n) printf("*");
	   else if(j < n) printf(" ");
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
