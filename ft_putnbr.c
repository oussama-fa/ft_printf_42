/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:06:14 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/05 18:13:42 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	res;

	res = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (nb < 0)
	{
		res += ft_putchar('-');
		nb *= -1;
		res += ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		res += ft_putnbr(nb / 10);
		res += ft_putnbr(nb % 10);
	}
	else if (nb <= 10)
		res += ft_putchar(nb + 48);
	return (res);
}
