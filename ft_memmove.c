/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:28:27 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/23 10:08:35 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		ft_memcpy (dst, src, len);
	else
	{
		s = s + (len - 1);
		d = d + (len - 1);
		while (len)
		{
			*d = *s;
			s--;
			d--;
			len--;
		}
	}
	return (dst);
}
