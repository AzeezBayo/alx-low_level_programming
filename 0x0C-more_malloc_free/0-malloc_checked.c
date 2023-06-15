#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * malloc_checked - allocates memory using malloc.
  * @b: size of memory to be allocated.
  *
  * Return: pointer to allocated memory.
  */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
