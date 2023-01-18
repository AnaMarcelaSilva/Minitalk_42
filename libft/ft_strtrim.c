/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 15:11:58 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 01:15:04 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(char c, char *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	start = 0;
	while (s1[start] && check_len(s1[start], (char *)set))
	start++;
	end = ft_strlen(s1) - 1;
	while (end > start && check_len(s1[end], (char *)set))
		end--;
	str = ft_substr(s1, start, ((end - start) + 1));
	if (!str)
		return (NULL);
	return (str);
}

static int	check_len(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
