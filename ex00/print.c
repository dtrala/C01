#include <stdio.h>
#include "print.h"

void	print(char *msg, char *color);
void	print_int(char *msg, char *color, int nb);
void	print_str(char *msg, char *color, char *str);

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
