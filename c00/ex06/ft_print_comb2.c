/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:12:16 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/12 17:38:37 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_i = 0;
int	g_j = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_four_digits(void)
{
	ft_putchar(g_i / 10 + '0');
	ft_putchar(g_i % 10 + '0');
	ft_putchar(' ');
	ft_putchar(g_j / 10 + '0');
	ft_putchar(g_j % 10 + '0');
	if (!(g_i == 98 && g_j == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	while (g_i <= 99)
	{
		while (g_j <= 99)
		{
			if (g_i < g_j)
			{
				ft_print_four_digits();
			}
			g_j++;
		}
		g_j = 0;
		g_i++;
	}
}
