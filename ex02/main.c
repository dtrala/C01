/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:49:02 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/12 02:55:46 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "colors.h"

void	test(int a, int b, int exp_a, int exp_b);
void	print_res(int exp_a, int exp_b, int a, int b);
void	print(char *msg, char *color);
void	print_int2(char *msg, char *color, int a, int b);
void	print_str(char *msg, char *color, char *str);

void	ft_swap(int *a, int *b);

int	main(void)
{
	test(1, 2, 2, 1);
	return (0);
}

void	test(int a, int b, int exp_a, int exp_b)
{
	printf("Testing with: ");
	print_int2("a=%d and b=%d\n", YEL, a, b);
	ft_swap(&a, &b);
	print_res(exp_a, exp_b, a, b);
}

void	print_res(int exp_a, int exp_b, int a, int b)
{
	print_int2("Expecting: a=%d and b=%d\n", BLU, a, b);
	if (exp_a == a && exp_b == b)
		print("OK\n", GRN);
	else
		print_int2("NOT OK, got: a=%d and b=%d\n", RED, a, b);
	printf("=============================================\n\n");
}
