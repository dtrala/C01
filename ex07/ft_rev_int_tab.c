/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:40:18 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/15 20:58:53 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	reverse;
	int	i;

	i = 0;
	reverse = 0;
	while (i < size / 2)
	{
		reverse = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = reverse;
		i++;
	}
}
