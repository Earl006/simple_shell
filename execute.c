#include "shell.h"

/**
 * execute -  A function that takes user input and executes it
 *@buf: command to be executed
 * Return: 0 Success, -1 Failiure
 */

int execute(const char *buf)
{
	int status = system(buf);

	if (status == -1)
	{
		perror("system");
		return (-1);
	}
return (0);
}
