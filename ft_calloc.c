/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:36:36 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/21 19:15:19 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	int		i;

	i = 0;
	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero(p, (count * size));
	return (p);
}
