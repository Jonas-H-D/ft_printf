/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhermon- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:53:34 by jhermon-          #+#    #+#             */
/*   Updated: 2021/11/19 16:31:26 by jhermon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putchar(char n)
{
	write (1, &n, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result++;
		str++;
	}
	return (result);
}
