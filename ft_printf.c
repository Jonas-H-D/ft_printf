/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhermon- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:55:51 by jhermon-          #+#    #+#             */
/*   Updated: 2021/11/19 16:34:01 by jhermon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		charcount;
	va_list	args;

	charcount = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format != '\0' )
			{
				charcount += ft_setconversion(args, format);
				format++;
			}
		}
		else
		{
			ft_putchar(*format);
			format++;
			charcount++;
		}
		va_end (args);
	}
	return (charcount);
}
