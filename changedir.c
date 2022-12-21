#include"main.h"
/**
 * changedir - change the directory
 * @pathname: the location of the directory
 * Return: zero on success
 */
int changedir(const char *pathname)
{
	chdir(pathname);
	return (0);
}
