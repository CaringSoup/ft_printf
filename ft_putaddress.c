/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 10:57:05 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/31 13:38:27 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_putaddress(void *i)
{
	int		counter;
	long	temp;

	counter = 0;
	temp = (long long)i;
	counter = ft_putstr("0x");
	counter += ft_putstr(ft_itoa_base(temp, 16));
	return (counter);
}
