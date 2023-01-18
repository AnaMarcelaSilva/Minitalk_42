/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:45:03 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/12 16:22:06 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	j;
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	else if (ft_strlen(s) <= len)
		len = ft_strlen(s) - start;
	str = malloc (sizeof (char) * (len + 1));
	if (!str || !s)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
