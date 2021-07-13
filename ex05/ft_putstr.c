/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlascaba <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:43:51 by dlascaba          #+#    #+#             */
/*   Updated: 2021/07/13 22:49:51 by dlascaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c)
{
	write(1, &c, 1)
}
void	ft_putstr(char *str)
{
	char txt_char;

	while (true)
	{
		txt_char = *str;
		if (txt_char == '\0')
		{
			break ;
		}
		ft_puchar(txt_char);
		str++;
	}
}
