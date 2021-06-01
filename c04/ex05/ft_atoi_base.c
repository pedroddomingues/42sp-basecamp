/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:18:03 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/17 02:04:33 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_counter;

int		is_base_valid(char *str, int len)
{
	int i;
	int j;

	i = 0;
	while (i < len)
	{
		if (str[i] == '+' || str[i] == '-')
			return (1);
		if (str[i] == ' ' || str[i] == '\n')
			return (1);
		if (str[i] == '\t' || str[i] == '\r')
			return (1);
		if (str[i] == '\v' || str[i] == '\f')
			return (1);
		j = 0;
		while (j < len)
		{
			if (i != j && str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		is_number(char number, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (number == base[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_atoi_new(char *str, char *base, int baselen, int sign)
{
	int j;
	int number;
	int result;

	result = 0;
	while (is_number(str[g_counter], base))
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == str[g_counter])
				number = j;
			j++;
		}
		result = (result * baselen) + number;
		g_counter++;
	}
	return (sign * result);
}

void	ft_putnbr(int nbr)
{
	char			c;
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n + '0';
	write(1, &c, 1);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int result;
	int baselen;

	g_counter = 0;
	sign = 1;
	baselen = 0;
	while (base[baselen] != '\0')
		baselen++;
	if (baselen < 2 || is_base_valid(base, baselen))
		return (0);
	while ((str[g_counter] >= 9 && str[g_counter] <= 13)
				|| str[g_counter] == 32)
		g_counter++;
	while (str[g_counter] == '-' || str[g_counter] == '+')
	{
		if (str[g_counter] == '-')
			sign *= -1;
		g_counter++;
	}
	result = ft_atoi_new(str, base, baselen, sign);
	ft_putnbr(result);
	return (result);
}
