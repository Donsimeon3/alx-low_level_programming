#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * First - a sentence will be printed before the main.
 * A function to be executed
 */

void first(void)
{
	Printf("You're beat! and yet, you must allow,\n");
	Printf("I bore my house upon my back!\n");
}
