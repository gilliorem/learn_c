
#include <stdio.h>


int main()

{
	int c;
	int result;

	while (1)
	{
		c = getchar();
		result = (c != EOF);
		putchar(c);
		printf("%d \n", result);

	}
	return 0;
}
