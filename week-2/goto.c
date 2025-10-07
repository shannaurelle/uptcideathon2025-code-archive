#include <stdio.h>

int main() {

int count = 5;

loop:
printf("Countdown: %d\n", count);
if(--count > 0) goto loop;

return 0;
}
