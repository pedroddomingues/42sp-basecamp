/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pehenriq <pehenriq@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 12:55:12 by pehenriq          #+#    #+#             */
/*   Updated: 2021/04/16 17:28:37 by pehenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start;
	unsigned int	count;

	count = 0;
	start = dest;
	while ((src[count] != '\0') && count < n)
	{
		*start = src[count];
		start++;
		count++;
	}
	while (count < n)
	{
		*start = '\0';
		start++;
		count++;
	}
	return (dest);
}
