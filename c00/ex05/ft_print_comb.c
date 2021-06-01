/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:23:00 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/12 17:36:45 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_i = 0;
int	g_j = 0;
int	g_k = 0;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_three_digits(void)
{
	ft_putchar(g_i + '0');
	ft_putchar(g_j + '0');
	ft_putchar(g_k + '0');
	if (!(g_i == 7 && g_j == 8 && g_k == 9))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	while (g_i <= 9)
	{
		while (g_j <= 9)
		{
			while (g_k <= 9)
			{
				if (g_i < g_j && g_j < g_k)
				{
					ft_print_three_digits();
				}
				g_k++;
			}
			g_k = 0;
			g_j++;
		}
		g_j = 0;
		g_k = 0;
		g_i++;
	}
}
