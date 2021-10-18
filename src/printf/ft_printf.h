/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yironmak <yironmak@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:10:07 by yironmak          #+#    #+#             */
/*   Updated: 2021/10/18 18:26:00 by yironmak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putchr(char c, int *count);
void	ft_putstr(char *str, int *count);
int		ft_strlen(const char *s);
void	ft_putnbr(long int n, int *count);
void	ft_puthex(unsigned long int n, int cap, int *count);

#endif