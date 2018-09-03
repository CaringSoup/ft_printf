/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 11:36:32 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/24 09:27:30 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int			ft_numlen(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_printnum(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnum(n / 10);
		ft_putnum(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int			ft_putnum(int n)
{
	int		len;

	if (n > INT_MAX || n <= INT_MIN)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	len = 0;
	if (n < 0)
		len += 1;
	len += ft_numlen(n);
	ft_printnum(n);
	return (len);
}
