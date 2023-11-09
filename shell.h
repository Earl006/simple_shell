#ifndef SHELL_H
#define SHELL_H

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>

/*prompt.c*/
int prompt(void);

/*path.c*/
void path(char *command, char *path);

#endif
