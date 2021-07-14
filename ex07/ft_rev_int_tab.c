/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:40:18 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/14 17:58:55 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	reverse;

	index = 0;
	while (index < size)
	{
		reverse = tab[index];
		tab[index] = tab[size] - 1;
		tab[size - 1] = reverse;
		index++;
		size--;
	}
}
