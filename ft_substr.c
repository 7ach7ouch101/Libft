/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:24:27 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/18 03:47:30 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
	{
		ptr = malloc((ft_strlen(s) + 1));
		if (!ptr)
			return (NULL);
	}
	else
		ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (start < ft_strlen(s) && len != 0)
	{
		ptr[i] = s[start];
		start++;
		i++;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
