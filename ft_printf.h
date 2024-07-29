/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 10:36:41 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:47:03 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int integer);
int		ft_printunsigned(unsigned int integer);
int		ft_putnbrbase(unsigned int integer, char *base);
int		ft_printpointer(void *adresse);
int		ft_putparams(const char *format, int *i, int count, va_list ap);
size_t	ft_countnb(long long n);

#endif