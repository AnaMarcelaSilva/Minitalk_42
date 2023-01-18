/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:50:11 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 06:59:13 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dest);
	if (i < size)
	{
		while (i < (size - 1) && *src)
		{
			dest[i] = *src;
			i++;
			src++;
		}
		dest[i] = '\0';
		return (ft_strlen(dest) + ft_strlen(src));
	}
	return (ft_strlen(src) + size);
}
