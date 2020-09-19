 
#include "monty.h"

/**
 * main - the root of the project
 * @argc: how many arguments were passed to a program
 * @argv: arguments vector
 *
 * Return: on scuccess, always EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	FILE* file;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file)
    {
    	printf("Error: Can't open file <file>\n");
		return (EXIT_FAILURE);
    }
    while ((read = getline(&line, &len, file)) != -1) {
        
        printf("%s", line);
       
    }
    if (line)
        free(line);

    exit(EXIT_SUCCESS);
}

