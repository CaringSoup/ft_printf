/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 14:55:26 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/31 15:17:08 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char		*set_ret(long nbr, int len, int base, const char *base_string)
{
	char	*pointer;

	if (!(pointer = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	pointer[len] = '\0';
	while (nbr)
	{
		pointer[--len] = base_string[nbr % base];
		nbr /= base;
	}
	return (pointer);
}

char		*ft_itoa_base(long long value, int base)
{
	int			len;
	long long	nbr;
	char		*pointer;
	const char	*base_string = "0123456789abcdef";

	if (value == 0)
		return ("0");
	len = 0;
	nbr = value;
	while (nbr)
	{
		nbr /= base;
		len += 1;
	}
	nbr = value;
	if (nbr < 0)
	{
		if (base == 10)
			len += 1;
		nbr *= -1;
	}
	pointer = set_ret(nbr, len, base, base_string);
	if (value < 0 && base == 10)
		pointer[0] = '-';
	return (pointer);
}
