/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:05:48 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 06:58:23 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *) src;
	str2 = (char *) dest;
	if (src < dest && (src + n) > dest)
	{
		while (n > 0)
		{
			str2[n - 1] = str1[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(str2, str1, n);
	return (dest);
}
