/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:43:30 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/31 14:55:06 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_handler(va_list arg, char c)
{
	int		ret;

	ret = 0;
	if (c == 'c' || c == 'C')
		ret += (ft_putchar(va_arg(arg, int)));
	else if (c == 's' || c == 'S')
		ret += (ft_putstr(va_arg(arg, char *)));
	else if (c == 'd' || c == 'D' || c == 'i')
		ret += (ft_putnum(va_arg(arg, int)));
	else if (c == 'u' || c == 'U' || c == 'o' || c == 'O'
			|| c == 'x' || c == 'X')
		ret += (ft_unsigned(c, va_arg(arg, long long)));
	else if (c == 'p')
		ret += (ft_putaddress(va_arg(arg, char *)));
	else if (c == '%')
	{
		ft_putchar('%');
		ret += 1;
	}
	return (ret);
}
