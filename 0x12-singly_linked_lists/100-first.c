#include <stdio.h>

void should_be_first(void) __attribute__ ((constructor));

/**
 * should_be_first - prints a sentence before the main
 * function is executed
 */
void should_be_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
