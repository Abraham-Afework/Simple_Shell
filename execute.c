#include"main.h"
/**
 * _execute - excutes the command
 *
 * @pathname:the path
 * @argv:the arguments
 * @envp:the executable command
 * Return:zero on suuccess
 */

int _execute(const char *pathname, char *const argv[], char *const envp[])
{
	pid_t pid;
	char bin[40];

	/* strcpy(bin,"/bin/"); */

       /* strcat(bin, pathname); */

	if (strcmp(pathname, "clear") == 0)
	{
		system("clear");
	}
	else if (strcmp(pathname, "cd") == 0)
	{
		changedir(argv[1]);
	}
	else if (strcmp(pathname, "help") == 0)
	{
		printf("What Can I help you");
	}
	else if (strcmp(pathname, "exit") == 0 || atoi(pathname) == EOF)
	{
		_exit(getppid());
	}
	else
	{
		pid = fork();
		if (pid == 0)
		{
			if (execve(pathname, argv, envp) == -1)
			{
				printf("Command '%s' not found\n", pathname);
			}
			exit(EXIT_FAILURE);
		}
		else
		{
			wait(NULL);
		}
	}
}
