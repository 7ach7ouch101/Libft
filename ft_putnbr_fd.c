/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmeziani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:20:54 by mmeziani          #+#    #+#             */
/*   Updated: 2021/11/21 19:07:49 by mmeziani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	negatif(int n, int fd)
{
	write (fd, "-", 1);
	n = n * (-1);
	return (n);
}

static	int	countlen(int a, int count)
{
	while (a)
	{
		a = a / 10;
		count = count * 10;
	}
	return (count);
}

static	void	zero(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	count;
	unsigned int	a;
	unsigned int	b;
	unsigned int	c;

	if (n < 0)
		n = negatif(n, fd);
	if (n == 0)
	{
		zero(n, fd);
		return ;
	}
	c = n;
	a = c;
	b = c;
	count = 1;
	a = a / 10;
	count = countlen(a, count);
	while (count)
	{
		c = (c / count) + 48;
		write(fd, &c, 1);
		c = b % count;
		count = count / 10;
	}
}
