/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhermon- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:59:35 by jhermon-          #+#    #+#             */
/*   Updated: 2021/11/19 16:28:31 by jhermon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber_hexa(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_putnumber_hexa(n / 16);
		n = n % 16;
	}
	if (n > 9 && n < 16)
		len += ft_putchar(87 + n);
	if (n >= 0 && n < 10)
		len += ft_putchar(48 + n);
	return (len);
}

int	ft_put_bighexa(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_put_bighexa(n / 16);
		n = n % 16;
	}
	if (n > 9 && n < 16)
		len += ft_putchar(55 + n);
	if (n >= 0 && n < 10)
		len += ft_putchar(48 + n);
	return (len);
}

int	ft_put_p(unsigned long n)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_put_p(n / 16);
		n = n % 16;
	}
	if (n > 9 && n < 16)
		len += ft_putchar(87 + n);
	if (n >= 0 && n < 10)
		len += ft_putchar(48 + n);
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		len += ft_putchar('-');
		len += ft_putnbr(n * (-1));
	}
	else
	{
		if (n > 9)
			len += ft_putnbr(n / 10);
		len += ft_putchar(48 + n % 10);
	}
	return (len);
}

int	ft_putunsigned_nbr(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putunsigned_nbr(n / 10);
	len += ft_putchar(48 + n % 10);
	return (len);
}
