/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufarah <oufarah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:49:55 by oufarah           #+#    #+#             */
/*   Updated: 2024/11/06 21:43:28 by oufarah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_putlower_hexa(unsigned int nb);
int	ft_putupper_hexa(unsigned int nb);
int	ft_putadress(unsigned long nb);
int	ft_printf(const char *format, ...);

#endif