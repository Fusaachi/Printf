/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:56:45 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:47:28 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbr(int integer)
{
	long	temp;
	char	c;

	temp = integer;
	if (temp == 0)
		return (ft_putchar('0'));
	if (integer < 0)
	{
		temp *= -1;
		ft_putchar('-');
	}
	if (temp >= 10)
		ft_putnbr(temp / 10);
	c = (temp % 10) + 48;
	ft_putchar(c);
	return (ft_countnb(integer));
}
