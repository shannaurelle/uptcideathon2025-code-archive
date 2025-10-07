#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
 if(argc < 3)
 {
  printf("Usage: collatz start-num end-num\n");
 }
 else 
 {
  int start = atoi(argv[1]);
  int end = atoi(argv[2]);
  do 
  {
   int t = start;
   printf("%d ",t);
   int cnt = 0;
   do
   {
    switch(t % 2)
    {
      case 0: t /= 2;      break;
      case 1: t *= 3; t++; break;
    }
    printf("%d ",t);
    cnt++;
   }while(t > 1);
   printf("| Start: %d Length: %d",start, cnt);
   printf("\n\n");
   start++;

  }while(start <= end);
 }
 return 0;
}
