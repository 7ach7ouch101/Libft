/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:06:14 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/21 18:48:26 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	char	*int_min_or_zero_alloc(int n)
{
	char	*new;

	if (n)
		new = ft_strdup("-2147483648");
	else
		new = ft_strdup("0");
	return (new);
}

static	int	cheackp(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static	int	len(int n, int count)
{
	if (cheackp(n))
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		count;

	if (n == -2147483648 || n == 0)
		return (int_min_or_zero_alloc(n));
	count = 0;
	count = len(n, count);
	p = malloc(count + 1);
	if (!p)
		return (NULL);
	p[count] = '\0';
	if (cheackp(n))
	{
		n = n * (-1);
		p[0] = '-';
	}
	while (n > 0)
	{
		count--;
		p[count] = ((n % 10) + '0');
		n = n / 10;
	}
	return (p);
}
