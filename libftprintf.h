/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:33:20 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/31 15:00:30 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# define UINTMAX 4294967295
# define INT_MAX 2147483647
# define INT_MIN -2147483648

char	*ft_strchr(const char *s, int c);
int		ft_handler(va_list arg, char c);
int		ft_unsigned(char letter, long long i);
int		ft_putstr(char *str);
int		ft_putchar(char c);
int		ft_putnum(int n);
int		ft_putaddress(void *i);
int		ft_printf(const char *format, ...);
char	*ft_toupper(char *str);
char	*ft_caphex(unsigned int i);
char	*ft_itoa_base(long long value, int base);
char	*set_ret(long nbr, int len, int base, const char *base_string);
size_t	ft_strlen(const char *s);

#endif
