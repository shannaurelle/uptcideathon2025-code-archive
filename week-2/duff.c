#include <stdio.h>

int main()
{
	int base = 2;
	int exp = 7;
	int num = 1;

	switch(exp % 2)
	{
		 case 0: do { num *= base; exp--;
		 case 1:      num *= base; exp--;
	             } while (exp > 0);
  	}
	printf("Result: %d\n",num);

	return 0;
}
