#include <stdio.h>
#include <stdlib.h>
#include "gbs_hello.h"

int main()
{
	/* print top seprator */
	for (int i = 0; i < SEPOR_LEN; i++)
		putchar('=');
	putchar('\n');
	printf("Hello!\n");
	/* print bottom seprator */
	for (int i = 0; i < SEPOR_LEN; i++)
		putchar('-');
	putchar('\n');
	exit(0);
}
