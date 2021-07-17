/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhumbert <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:37:58 by lhumbert          #+#    #+#             */
/*   Updated: 2021/07/12 02:44:18 by lhumbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "print.h"

void	test(int exp);
void	print_res(int exp, int res);

void	ft_ft(int *nbr);

int	main(void)
{
	test(42);
}

void	test(int exp)
{
	int	nbr;

	printf("Testing\n");
	ft_ft(&nbr);
	print_res(exp, nbr);
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
