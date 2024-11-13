/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putHEXA.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 23:55:10 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/05 23:55:11 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlower_hexa(unsigned int nb)
{
	char	*base;
	int		res;

	base = "0123456789abcdef";
	res = 0;
	if (nb >= 16)
	{
		res += ft_putlower_hexa(nb / 16);
		res += ft_putlower_hexa(nb % 16);
	}
	else if (nb <= 16)
		res += ft_putchar(base[nb % 16]);
	return (res);
}

int	ft_putupper_hexa(unsigned int nb)
{
	char	*base;
	int		res;

	res = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		res += ft_putupper_hexa(nb / 16);
		res += ft_putupper_hexa(nb % 16);
	}
	else if (nb <= 16)
		res += ft_putchar(base[nb % 16]);
	return (res);
}
