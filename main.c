#include"main.h"
/**
 * main - entry point
 *
 * Return: return 0
 *
 */

int main(void)
{

	welcome();
	while (1)
	{
		currentdir();
		get_line();
	}
	return (0);
}
