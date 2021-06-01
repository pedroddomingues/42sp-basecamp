/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:59:37 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/13 22:11:13 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A')
			return (0);
		if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		if (str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
