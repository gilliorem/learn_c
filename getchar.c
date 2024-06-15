
#include <stdio.h>


int main()

{
	int c;
	printf("%d\n", EOF);

	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}

	return 0;
}
