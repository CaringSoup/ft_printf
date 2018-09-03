/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caphex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 08:14:25 by gferreir          #+#    #+#             */
/*   Updated: 2018/08/20 15:36:00 by gferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_caphex(unsigned int i)
{
	char	*str;

	str = ft_itoa_base(i, 16);
	str = ft_toupper(str);
	return (str);
}
