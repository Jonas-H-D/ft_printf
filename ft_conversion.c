/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhermon- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:47:44 by jhermon-          #+#    #+#             */
/*   Updated: 2021/11/19 16:09:17 by jhermon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
		return (-1);
	return (ft_putnumber_hexa(n));
}

int	ft_big_x(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
		return (-1);
	return (ft_put_bighexa(n));
}

int	ft_p(va_list args)
{
	unsigned long	n;

	n = va_arg(args, unsigned long);
	if (n == 0)
		return (ft_putchar('0'));
	if (n < 0)
		return (-1);
	return (ft_put_p(n));
}
