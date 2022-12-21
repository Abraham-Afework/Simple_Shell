#include"main.h"
/**
 * changedir - change the directory
 * @pathname: the location of the directory
 * Return: zero on success
 */
int changedir(const char *pathname)
{
	char *ptr, buff[PATH_MAX];

	chdir(pathname);
	return (0);
}
