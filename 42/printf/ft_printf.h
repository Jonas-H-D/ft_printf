/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhermon- <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:02:29 by jhermon-          #+#    #+#             */
/*   Updated: 2021/11/19 16:23:17 by jhermon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char n);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_setconversion(va_list args, const char *format);
char	*ft_itoa(int n);
int		ft_s(va_list args);
int		ft_i(va_list args);
int		ft_putnbr(int n);
void	ft_c(va_list args);
int		ft_u(va_list args);
int		ft_putunsigned_nbr(unsigned int n);
int		ft_x(va_list args);
int		ft_putnumber_hexa(unsigned int n);
int		ft_big_x(va_list args);
int		ft_put_bighexa(unsigned int n);
int		ft_p(va_list args);
int		ft_put_p(unsigned long n);
#endif
