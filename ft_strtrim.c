/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:41:23 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/18 03:59:46 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

static	int	checker(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == *s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			len;
	char			*ptr;
	int				j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] && checker(&s1[i], set))
		i++;
	while (s1[j] && checker(&s1[j], set))
		j--;
	len = (j - i) + 1;
	ptr = ft_substr(s1, i, len);
	return (ptr);
}
