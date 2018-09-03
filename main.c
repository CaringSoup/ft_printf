/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 08:24:19 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/31 15:00:26 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main(void)
{
	char	*s = "This is a string";
	int		i = 100;
	int		x = 1001;
	char	c = 'f';
	char	*p = "address";
	char	*a = "a";

	i = ft_printf("%p\n", a);
	x = printf("%p", a);
	//printf("ours: %d, theirs %d\n", i, x);
}
