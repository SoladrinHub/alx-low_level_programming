#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size and assign char c
 * @c: char to assign
 * @size: size of array
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}






