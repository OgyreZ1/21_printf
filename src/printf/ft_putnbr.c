/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yironmak <yironmak@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:00:07 by yironmak          #+#    #+#             */
/*   Updated: 2021/10/18 16:45:05 by yironmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long int n, int *count)
{
	if (n < 0)
	{
		ft_putchr('-', count);
		ft_putnbr(n * -1, count);
	}
	else if (n >= 0 && n <= 9)
		ft_putchr(n + 48, count);
	else
	{
		ft_putnbr(n / 10, count);
		ft_putchr((n % 10) + 48, count);
	}
}
