/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:07:19 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:47:36 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printunsigned(unsigned int integer)
{
	unsigned int	temp;
	char			c;

	temp = integer;
	if (temp >= 10)
		ft_printunsigned(temp / 10);
	c = (temp % 10) + 48;
	ft_putchar(c);
	return (ft_countnb(temp));
}
