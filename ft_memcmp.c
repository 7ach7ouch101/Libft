/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:26:13 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/21 19:26:23 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*p;
	const unsigned char	*o;
	size_t				i;

	i = 0;
	p = str1;
	o = str2;
	while (i < n)
	{
		if (p[i] == o[i])
			i++;
		else
			return (p[i] - o[i]);
	}
	return (0);
}
