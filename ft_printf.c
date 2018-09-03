/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:52:52 by gferreir          #+#    #+#             */
/*   Updated: 2018/09/03 09:20:01 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		res;

	if (!format)
		exit(-1);
	i = 0;
	res = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break ;
			while (format[i] != 'c' && format[i] != 'C' && format[i] != 'X' && format[i] != 'x' && format[i] != 'U'
					&& format[i] != 'u' && format[i] != 'O' && format[i] != 'o' && format[i] != 'i' && format[i] != 'D'
					&& format[i] != 'd' && format[i] != 'p' && format[i] != 'S' && format[i] != 's' && format[i] != '%'
					&& format[i] != '\0')
				i++;
			res += ft_handler(arg, format[i]);
		}
		else if (format[i] != '%')
			res += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (res);
}
