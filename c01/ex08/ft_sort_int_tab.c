/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:22:14 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/12 23:57:16 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	while (*(tab + i) != 0)
	{
		j = i + 1;
		if (*(tab + i) > *(tab + j) && j < size)
		{
			k = *(tab + i);
			*(tab + i) = *(tab + j);
			*(tab + j) = k;
			i = -1;
		}
		i++;
	}
}
