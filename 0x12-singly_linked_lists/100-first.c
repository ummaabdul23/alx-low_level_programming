#include <stdio.h>

void __attribute__ ((constructor)) myFunc(void);

/**
 * myFunc - prints a sentence before the main
 *
 */
void myFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
