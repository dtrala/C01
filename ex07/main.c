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

void	ft_rev_int_tab(int *tab, int size);
void	test(int *tab, int *exp, int size);
void	print_res(int *exp, int *res, int size);
void	print(char *msg, char *color);
void	print_int(char *msg, char *color, int nb);
void	print_str(char *msg, char *color, char *str);
void	print_aint(char *msg, int *arr, int size, char *color);

typedef	enum {false, true} bool;

int	main(void)
{
	int	tab_exp1[][5] = {{1, 2, 3, 4, 5}, {5, 4, 3, 2, 1}};
	test(tab_exp1[0], tab_exp1[1], 5);
	int	tab_exp2[][4] = {{1, 2, 3, 4}, {4, 3, 2, 1}};
	test(tab_exp2[0], tab_exp2[1], 4);
	int	tab_exp3[][0] = {{}, {}};
	test(tab_exp3[0], tab_exp3[1], 0);
	int	tab_exp4[][1] = {{1}, {1}};
	test(tab_exp4[0], tab_exp4[1], 1);
}

void	test(int *tab, int *exp, int size)
{
	print_aint("Testing with: ", tab, size, YEL);
	printf("\n");
	ft_rev_int_tab(tab, size);
	print_res(exp, tab, size);
}

void	print_res(int *exp, int *res, int size)
{
	int 	i;
	bool	ok;

	print_aint("Expecting: ", exp, size, BLU);
	printf("\n");
	ok = true;
	i = 0;
	while (i < size)
	{
		if (exp[i] != res[i])
		{
			ok = false;
			break ;
		}
		i++;
	}
	if (ok)
		print("OK", GRN);
	else
		print_aint("NOT OK, got: ", res, size, RED);
	printf("\n");
	printf("=============================================\n\n");
}
