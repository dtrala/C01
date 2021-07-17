/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 03:46:05 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/12 04:00:51 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "colors.h"

void	ft_ultimate_div_mod(int *a, int *b);
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
	printf("Testing with: ");
	print_int2("a=%d and b=%d\n", YEL, a, b);
	ft_ultimate_div_mod(&a, &b);
	print_res(a, b, exp_div, exp_mod);
}

void	print_res(int exp_a, int exp_b, int a, int b)
{
	print_int2("Expecting: a(div)=%d and b(mod)=%d\n", BLU, a, b);
	if (exp_a == a && exp_b == b)
		print("OK\n", GRN);
	else
		print_int2("NOT OK, got: a(div)=%d and b(mod)=%d\n", RED, a, b);
	printf("=============================================\n\n");
}
