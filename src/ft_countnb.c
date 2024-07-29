/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgiroux <pgiroux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:21:01 by pgiroux           #+#    #+#             */
/*   Updated: 2024/07/29 10:47:48 by pgiroux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_countnb(long long n)
{
	size_t	count;
	long	temp;

	count = 0;
	temp = n;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		temp *= -1;
		count ++;
	}
	while (temp != 0)
	{
		temp /= 10;
		count++;
	}
	return (count);
}
