/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:18:44 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/21 18:51:44 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				a;
	char			*p;

	i = 0;
	a = 0;
	if (!s || !f)
		return (NULL);
	while (s[a])
		a++;
	p = (char *)malloc((a + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
