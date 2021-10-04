/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:43:51 by akurz             #+#    #+#             */
/*   Updated: 2021/07/21 09:38:05 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dec_to_hex(unsigned int n, int *count)
{
	int	modulo;

	modulo = 0;
	if (n > 15)
		ft_dec_to_hex(n / 16, count);
	modulo = n % 16;
	if (modulo > 9)
		ft_putchar(modulo + 87, count);
	else
		ft_putchar(modulo + 48, count);
}
