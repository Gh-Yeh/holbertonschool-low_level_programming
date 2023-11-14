#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
* print_dog - prints a struct dog
* @d: struct dog to print
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	else
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("(nil)");
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("(nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nil)");
	}
}
