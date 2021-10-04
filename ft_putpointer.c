/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 10:12:54 by akurz             #+#    #+#             */
/*   Updated: 2021/07/22 17:19:07 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer_convert(unsigned long nbr, int *count)
{
	unsigned long	modulo;

	modulo = 0;
	if (nbr > 15)
		ft_putpointer_convert(nbr / 16, count);
	modulo = nbr % 16;
	if (modulo < 9)
		ft_putchar(modulo + 48, count);
	else
		ft_putchar(modulo + 87, count);
}

void	ft_putpointer(void *ptr, int *count)
{
	write(1, "0x", 2);
	*count = *count + 2;
	ft_putpointer_convert((unsigned long)ptr, count);
}
