/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 03:17:26 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/12 03:36:31 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "colors.h"

void	ft_div_mod(int a, int b, int *div, int *mod);
void	test(int a, int b, int exp_a, int exp_b);
void	print(char *msg, char *color);
void	print_res(int exp_a, int exp_b, int a, int b);
void	print_int2(char *msg, char *color, int a, int b);

int	main(void)
{
	test(10, 3, 3, 1);
	return (0);
}

void	test(int a, int b, int exp_div, int exp_mod)
{
	int	div;
	int	mod;

	printf("Testing with: ");
	print_int2("a=%d and b=%d\n", YEL, a, b);
	ft_div_mod(a, b, &div, &mod);
	print_res(exp_div, exp_mod, div, mod);
}

void	print_res(int exp_a, int exp_b, int a, int b)
{
	print_int2("Expecting: div=%d and mod=%d\n", BLU, a, b);
	if (exp_a == a && exp_b == b)
		print("OK\n", GRN);
	else
		print_int2("NOT OK, got: a=%d and b=%d\n", RED, a, b);
	printf("=============================================\n\n");
}
