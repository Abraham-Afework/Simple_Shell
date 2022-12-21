#include"main.h"
/**
 * get_line - function that gets the input string
 *
 * Return: zero on success
 */

int get_line(void)
{
	char *ptr, *linpt = NULL;
	char *delimter = " \n\t";
	size_t length, count;
	char *newargv[100];

	length = 0;
	count = 1;

	getline(&linpt, &length, stdin);

	ptr = malloc(sizeof(linpt));
	ptr = strtok(linpt, delimter);

	newargv[0] = ptr;

	while (ptr != NULL)
	{
		ptr = strtok(NULL, delimter);
		newargv[count] = ptr;
		count++;
	}
	newargv[count] = NULL;

	_execute(newargv[0], newargv, environ);

	free(linpt);
	free(ptr);
	return (0);
}
