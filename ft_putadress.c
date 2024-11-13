/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:08:10 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/05 23:54:48 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthelp_adress(unsigned long nb)
{
	char	*base;
	int		res;

	base = "0123456789abcdef";
	res = 0;
	if (nb >= 16)
	{
		res += ft_puthelp_adress(nb / 16);
		res += ft_puthelp_adress(nb % 16);
	}
	else if (nb <= 16)
		res += ft_putchar(base[nb % 16]);
	return (res);
}

int	ft_putadress(unsigned long nb)
{
	int		res;

	res = 0;
	res += ft_putstr("0x");
	res += ft_puthelp_adress(nb);
	return (res);
}
