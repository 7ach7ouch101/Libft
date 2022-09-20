/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 23:58:23 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/21 19:13:15 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	a;
	size_t	i;
	char	*p;

	i = 0;
	a = ft_strlen(s1);
	p = malloc((a + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (i <= a)
	{
		p[i] = s1[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
