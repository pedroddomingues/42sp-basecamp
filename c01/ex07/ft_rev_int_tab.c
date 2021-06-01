/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 02:14:45 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/12 23:56:40 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int table[size];

	i = 0;
	j = size - 1;
	while (i < size)
	{
		table[i] = tab[j];
		i++;
		j--;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = table[i];
		i++;
	}
}
