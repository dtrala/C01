/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:04:44 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/12 23:20:15 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "colors.h"

int	ft_strlen(char *str);
void	test(char *str, int exp);
void	print_res(int exp, int res);
void	print(char *msg, char *color);
void	print_int(char *msg, char *color, int nb);
void	print_str(char *msg, char *color, char *str);

int	main(void)
{
	test("Hello", 5);
	test("", 0);
	test("0123456789", 10);
}

void	test(char *str, int exp)
{
	print_str("Testing with: %s\n", YEL, str);
	print_res(exp, ft_strlen(str));
}

void	print_res(int exp, int res)
{
	print_int("Expecting: %d\n", BLU, exp);
	if (exp == res)
		print("OK\n", GRN);
	else
		print_int("NOT OK, got: %d\n", RED, res);
	printf("=============================================\n\n");
}
