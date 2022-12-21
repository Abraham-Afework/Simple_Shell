#ifndef __MAIN_H__
#define __MAIN_H__


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include<limits.h>
#include<signal.h>
#include <dirent.h>
#define CLEAR_SCREEN "\e[1;1H\e[2J"


extern char **environ;
int _execute(const char *pathname, char *const argv[], char *const envp[]);
int get_line(void);
int changedir(const char *pathname);
void currentdir(void);
void welcome(void);







#endif
