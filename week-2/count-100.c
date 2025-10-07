#include <stdio.h>

int main() 
{
 for(int i = 9; i >= 0; i--)
 {
  for(int j = 10; j > 0; j--)
   printf("Countdown: %d\n", i*10+j);
 }

return 0;
}
