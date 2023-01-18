/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 19:11:49 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 06:59:34 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	if (c > 255)
		return ((char *)str);
	index = ft_strlen(str);
	while (index >= 0)
	{
		if (str[index] == c)
			return ((char *) &str[index]);
		index--;
	}
	return (NULL);
}
