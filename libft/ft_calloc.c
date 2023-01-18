/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcela <amarcela@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:16:41 by amarcela          #+#    #+#             */
/*   Updated: 2022/09/13 06:57:46 by amarcela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;

	if (size > 2147483647)
		return (NULL);
	ptr = malloc(size * nitems);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (size * nitems));
	return (ptr);
}
