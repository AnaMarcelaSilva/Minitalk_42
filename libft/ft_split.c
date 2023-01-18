/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 04:07:44 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 07:15:43 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_str(char **str, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	if (!s)
	{
		str = malloc(sizeof(char *) * (1));
		str[0] = NULL;
		return (str);
	}
	while (s[i])
	{
		if (s[i] == c && i != 0 && s[i - 1] != c)
			count++;
		i++;
	}
	if (i != 0 && s[i - 1] != c && ft_strlen(s) > 0)
		count++;
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	put_str(str, s, c);
	return (str);
}

static void	put_str(char **str, char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	start;

	i = 0;
	len = 0;
	start = 0;
	while (s[start + len])
	{
		while (s[start] == c && s[start])
			start++;
		while (s[start + len] != c && s[start + len])
			len++;
		if (len)
		{
			str[i] = ft_substr(s, start, len);
			start = start + len;
			len = 0;
			i++;
		}
	}
	str[i] = NULL;
}
