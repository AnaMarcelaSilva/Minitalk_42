/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 21:59:39 by amarcela          #+#    #+#             */
/*   Updated: 2023/01/18 11:05:09 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nbr(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_convert(char *str, int n, size_t count)
{
	size_t	i;

	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (count-- > i)
	{
		if (n < 0)
		{	
			str[count] = '0' + n % 10 * (-1);
			n = n / 10;
		}
		else
		{
			str[count] = '0' + n % 10;
			n = n / 10;
		}
	}
}

char	*my_itoa(int n)
{
	size_t	count;
	char	*str;

	count = count_nbr(n);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	ft_convert(str, n, count);
	return (str);
}
