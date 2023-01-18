/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 03:27:19 by amarcela          #+#    #+#             */
/*   Updated: 2022/10/18 04:37:41 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_arg(char index, va_list args)
{
	if (index == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (index == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (index == 'i' || index == 'd')
		return (ft_id(va_arg(args, int)));
	if (index == 'x' || index == 'X' || index == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), index));
	if (index == 'p')
		return (ft_isptr(va_arg(args, unsigned long)));
	return (ft_putchar(index));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += check_arg(*str, args);
		}
		else
			count += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
