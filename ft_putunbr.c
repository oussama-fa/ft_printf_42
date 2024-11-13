/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:06:33 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/05 18:14:11 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nb)
{
	int	res;

	res = 0;
	if (nb >= 10)
	{
		res += ft_putunbr(nb / 10);
		res += ft_putunbr(nb % 10);
	}
	else if (nb <= 10)
		res += ft_putchar(nb + 48);
	return (res);
}
