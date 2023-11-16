#include "shell.h"

/**
 * handle_path - A function that finds full path of a command in PATH
 * and executes it
 * @command: The command to be executed
 * @path: The PATH environment variable
 * @buf: The buffer to store the command's name
 *
 */
void handle_path(char *command, char *path, char *buf)
{
	char full_path[BUFFER_SIZE];
	char *token = strtok(path, ":");
	int found = 0;

	while (token != NULL)
	{
		snprintf(full_path, BUFFER_SIZE, "%s/%s", token, buf);
		if (access(full_path, X_OK) == 0)
		{
			command = full_path;
			found = 1;
			break;
		}
		token = strtok(NULL, ":");
	}
	if (found)
	{
		char *args[] = {command, NULL};

		execve(command, args, NULL);
		perror("execve");
	}
	else
	{
		printf("Command '%s' not found\n", buf);
	}
}
