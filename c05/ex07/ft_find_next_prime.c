/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:33:26 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/17 05:09:42 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;
	int result;

	i = 2;
	result = 0;
	while (!result)
	{
		if (nb < 2)
			return (0);
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				nb++;
			i++;
		}
		result = nb;
	}
	return (result);
}
