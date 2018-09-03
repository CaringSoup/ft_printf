/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 14:52:52 by gferreir          #+#    #+#             */
/*   Updated: 2018/09/03 09:53:32 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		is_flag(const char format)
{
	return (format != 'c' && format != 'C' && format != 'X' && format != 'x' &&
			format != 'U' && format != 'u' && format != 'O' && format != 'o' && 
			format != 'i' && format != 'D' && format != 'd' && format != 'p' && 
			format != 'S' && format != 's' && format != '%' && format != '\0');
}

static void		valid(const char *f)
{
	if (!f)
		exit(-1);
}

int				ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		res;

	valid(format);
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
			while (is_flag(format[i]))
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
