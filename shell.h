#ifndef SHELL_H
#define SHELL_H

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

#define BUFFER_SIZE 1024

/*main.c*/
int main(void);

/*prompt.c*/
int prompt(void);

/*path.c*/
void handle_path(char *, char *, char *);

#endif
