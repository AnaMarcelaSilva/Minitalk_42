/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 12:39:06 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 06:59:31 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	n;

	if (s2[0] == '\0')
		return ((char *) s1);
	i = 0;
	while (s1[i] != '\0' && i < len)
	{
		n = 0;
		while (s1[n + i] == s2[n] && (i + n) < len)
		{
			if (s2[n + 1] == '\0')
				return ((char *) &s1[i]);
			n++;
		}
		i++;
	}
	return (NULL);
}
