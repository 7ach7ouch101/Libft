/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:18:33 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/17 15:40:35 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	d = dst;
	s = src;
	if (!src && !dst)
		return (NULL);
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
