/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhermon- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:13:29 by jhermon-          #+#    #+#             */
/*   Updated: 2021/11/19 16:33:04 by jhermon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_setconversion(va_list args, const char *format)
{
	int	count;

	count = 0;
	if (*format == '%')
		count = ft_putchar('%');
	if (*format == 'c')
	{
		ft_c(args);
		count++;
	}
	if (*format == 's')
		count = ft_s(args);
	if (*format == 'd' | *format == 'i')
		count = ft_i(args);
	if (*format == 'u')
		count = ft_u(args);
	if (*format == 'x')
		count = ft_x(args);
	if (*format == 'X')
		count = ft_big_x(args);
	if (*format == 'p')
		count = ft_putstr("0x") + ft_p(args);
	return (count);
}

int	ft_s(va_list args)
{
	char	*printstr;
	int		charcount;

	printstr = va_arg(args, char *);
	charcount = ft_putstr(printstr);
	return (charcount);
}

int	ft_i(va_list args)
{
	int	charcount;

	charcount = ft_putnbr(va_arg(args, int));
	return (charcount);
}

void	ft_c(va_list args)
{
	ft_putchar(va_arg(args, int));
}

int	ft_u(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (ft_putunsigned_nbr(n));
	if (n < 1)
		return (-1);
	return (ft_putunsigned_nbr(n));
}
