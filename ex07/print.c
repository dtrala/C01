#include <stdio.h>
#include "colors.h"

void	print(char *msg, char *color);
void	print_int(char *msg, char *color, int nb);
void	print_str(char *msg, char *color, char *str);
void	print_aint(char *msg, int *arr, int size, char *color);

void	print(char *msg, char *color)
{
	printf("%s", color);
	printf("%s", msg);
	printf(RESET);
}

void	print_int(char *msg, char *color, int nb)
{
	printf("%s", color);
	printf(msg, nb);
	printf(RESET);
}

void	print_str(char *msg, char *color, char *str)
{
	printf("%s", color);
	printf(msg, str);
	printf(RESET);
}

void	print_aint(char *msg, int *arr, int size, char *color)
{
	int	i;

	printf("%s", msg);
	printf("%s[", color);
	i = 0;
	while (i < size)
	{
		if (i != 0)
			printf(", ");
		printf("%d", arr[i]);
		i++;
	}
	printf("]");
	printf(RESET);
}
