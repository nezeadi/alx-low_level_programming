#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function to reallocate a memory block
 * @ptr: pointer to memory block to be reallocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

