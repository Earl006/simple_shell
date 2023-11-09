#ifndef SHELL_H
#define SHELL_H

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/*prompt.c*/
int prompt(void);

/*path.c*/
void handle_path(char *, char *, char *);
#endif
