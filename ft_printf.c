/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:39:53 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/10 15:03:43 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(int *res, char c, va_list args)
{
	if (c == 'c')
		*res += ft_putchar(va_arg(args, int));
	else if (c == 's')
		*res += ft_putstr(va_arg(args, char *));
	else if ((c == 'd' || c == 'i'))
		*res += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		*res += ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		*res += ft_putlower_hexa(va_arg(args, unsigned int));
	else if (c == 'X')
		*res += ft_putupper_hexa(va_arg(args, unsigned int));
	else if (c == 'p')
		*res += ft_putadress(va_arg(args, unsigned long));
	else if (c == '%')
		*res += ft_putchar('%');
	else
		*res += ft_putchar(c);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;
	int		i;

	if (write(1, "", 0) < 0)
		return (-1);
	va_start(args, format);
	res = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			ft_format(&res, format[i], args);
		}
		else if (format[i] != '%')
			res += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (res);
}
