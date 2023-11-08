#include "shell.h"

/**
 * prompt - A function that displays a prompt
 *
 * Return: 0 Success
 */

int prompt(void)
	{
		while (1)
		{
			size_t n = 0;
			char *buf = NULL;
			ssize_t read;

			printf("$ ");
			fflush(stdout);

			read = getline(&buf, &n, stdin);

			if (read == -1)
			{
				if (feof(stdin))
				{
					printf("\n");
					free(buf);
					break;
				}
				else
				{
					perror("getline");
					free(buf);
					exit(1);
				}
			}

			if (buf[read - 1] == '\n')
			{
				buf[read - 1] = '\0';
			}
			if (buf[0] != '\0')
			{
				int status = system(buf);

				if (status == -1)
				{
					perror("system");
				}
			}
			free(buf);
		}
		return (0);
}
