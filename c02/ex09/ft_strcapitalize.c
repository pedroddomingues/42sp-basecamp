/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:35:42 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/13 22:25:24 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int is_init_char;
	int alpha_up;
	int num;

	i = 0;
	is_init_char = 1;
	while (str[i] != '\0')
	{
		alpha_up = str[i] >= 65 && str[i] <= 90;
		num = str[i] >= 48 && str[i] <= 57;
		if (is_init_char && str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			is_init_char = 0;
		}
		else if (!is_init_char && alpha_up)
			str[i] += 32;
		else if (!(alpha_up || (str[i] >= 97 && str[i] <= 122) || num))
			is_init_char = 1;
		else
			is_init_char = 0;
		i++;
	}
	return (str);
}
