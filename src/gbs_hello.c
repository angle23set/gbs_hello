#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Hello!\n");
	/* print bottom seprator */
	for (int i = 0; i < SEPOR_LEN; i++)
		putchar('-');
	putchar('\n');
	exit(0);
}
