/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:47:17 by amarcela          #+#    #+#             */
/*   Updated: 2022/10/18 04:34:30 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#define BASELOW "0123456789abcdef"
#define BASEUP "0123456789ABCDEF"
#define DECIMAL "0123456789"

int	ft_ishexa(unsigned long n, char index)
{
	int	count;

	count = 0;
	if (n / 16 > 0)
		count += ft_ishexa(n / 16, index);
	if (index == 'x')
		count += ft_putchar(BASELOW[n % 16]);
	else
		count += ft_putchar(BASEUP[n % 16]);
	return (count);
}

int	ft_isun(unsigned int n, char index)
{
	int	count;

	count = 0;
	if (n / 10 > 0)
		count += ft_isun(n / 10, index);
	count += ft_putchar(DECIMAL[n % 10]);
	return (count);
}

int	ft_id(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		ft_putchar('-');
		count += 1;
		n *= -1;
	}
	count += ft_putnbr(n, 'u');
	return (count);
}

int	ft_putnbr(unsigned long n, char index)
{
	int	count;

	count = 0;
	if (index == 'x' || index == 'X')
		count += ft_ishexa(n, index);
	else if (index == 'u')
		count += ft_isun(n, index);
	return (count);
}
