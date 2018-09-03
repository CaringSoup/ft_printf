/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 08:57:39 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/24 09:46:33 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int		ft_unsigned(char letter, long long i)
{
	char	*str;
	int		len;

	str = NULL;
	if (i < 0)
		i = UINTMAX + i;
	if (letter == 'u')
		str = ft_itoa_base(i, 10);
	else if (letter == 'o')
		str = ft_itoa_base(i, 8);
	else if (letter == 'x')
		str = ft_itoa_base(i, 16);
	else if (letter == 'X')
		str = ft_caphex(i);
	len = ft_strlen(str);
	ft_putstr(str);
	return (len);
}
