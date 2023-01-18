/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:25:39 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 06:57:36 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_limit(int result, int n, int signal);

int	ft_atoi(const char *str)
{	
	int	i;
	int	s;
	int	num;

	s = 1;
	num = 0;
	i = 0;
	while (str[i] != '\0' && (str[i] == '\f' || str[i] == '\t'
			|| str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\v'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		if (!check_limit(num, str[i] - '0', s))
			return (0);
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * s);
}

static int	check_limit(int result, int n, int signal)
{
	if (signal < 0)
	{
		if (result > (2147483648 - n) / 10)
			return (0);
		return (1);
	}
	else
	{
		if (result > (2147483647 - n) / 10)
			return (0);
		return (1);
	}
}
