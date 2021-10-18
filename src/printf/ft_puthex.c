/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yironmak <yironmak@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:19:45 by yironmak          #+#    #+#             */
/*   Updated: 2021/10/18 16:45:02 by yironmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long int n, int cap, int *count)
{
	char	*base_l;
	char	*base_u;

	base_l = "0123456789abcdef";
	base_u = "0123456789ABCDEF";
	if (n >= 0 && n <= 15)
	{
		if (cap)
			ft_putchr(base_u[n], count);
		else
			ft_putchr(base_l[n], count);
	}
	else
	{
		ft_puthex(n / 16, cap, count);
		ft_puthex(n % 16, cap, count);
	}
}
