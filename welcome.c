#include"main.h"
/**
 * welcome - function that displays welcome page
 *
 */


void welcome(void)
{
	int firstime;

	firstime = 1;

	if (firstime)
	{
		printf("\e[1;1H\e[2J");
		printf("\n\n\t\t\t\tWELCOME TO ALX SHELL\n\n\n");
		printf("*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\n");
		firstime = 0;
	}
}
