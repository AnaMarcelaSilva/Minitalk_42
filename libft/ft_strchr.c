/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:38:30 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 06:58:45 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*str1;

	str1 = (char *)str;
	if (c > 255 || str[0] == '\0')
		return (str1);
	while (*str1)
	{
		if (*str1 == c)
			return (str1);
		str1++;
	}
	if (*str1 == c)
		return (str1);
	return (NULL);
}
