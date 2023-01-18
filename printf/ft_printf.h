/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 04:31:01 by amarcela          #+#    #+#             */
/*   Updated: 2022/10/18 04:31:03 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h> 
# include <stdlib.h>

//int	ft_ishexa(unsigned long arg, char index);
int	ft_isptr(unsigned long nbr);
int	check_arg(char index, va_list args);
int	ft_printf(const char *str, ...);
int	ft_putnbr(unsigned long n, char index);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_itoa(int n);
int	ft_id(int i);

#endif
