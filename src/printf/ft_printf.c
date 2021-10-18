/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yironmak <yironmak@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:10:08 by yironmak          #+#    #+#             */
/*   Updated: 2021/10/18 17:37:17 by yironmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse(va_list argptr, char c, int *count)
{
	if (c == 's')
		ft_putstr(va_arg(argptr, char *), count);
	if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_puthex((long int)va_arg(argptr, unsigned long int), 0, count);
	}
	if (c == 'd' || c == 'i')
		ft_putnbr((long int)va_arg(argptr, int), count);
	if (c == 'u')
		ft_putnbr((long int)va_arg(argptr, unsigned int), count);
	if (c == 'x')
		ft_puthex((long int)va_arg(argptr, unsigned int), 0, count);
	if (c == 'X')
		ft_puthex((long int)va_arg(argptr, unsigned int), 1, count);
	if (c == '%')
		ft_putchr('%', count);
}

int	ft_printf(const char *s, ...)
{
	va_list	argptr;
	int		i;
	int		count;

	count = 0;
	i = -1;
	va_start(argptr, s);
	while (++i < ft_strlen(s))
	{
		while (s[i] != '%' && s[i])
			ft_putchr(s[i++], &count);
		if (s[i] == '%' && s[++i] == 'c')
			ft_putchr(va_arg(argptr, int), &count);
		else
			parse(argptr, s[i], &count);
	}
	va_end(argptr);
	return (count);
}
