/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:51:37 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/21 19:21:28 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	size_t	i;
	size_t	j;
	size_t	u;

	i = 0;
	hay = (char *)haystack;
	if (ft_strlen(needle) == 0 || haystack == needle)
		return (hay);
	while (haystack[i] && i < len)
	{
		j = 0;
		u = 0;
		while (haystack[i] == needle[j] && i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + (i - u));
			u++;
			i++;
			j++;
		}
		i = i - u;
		i++;
	}
	return (0);
}
