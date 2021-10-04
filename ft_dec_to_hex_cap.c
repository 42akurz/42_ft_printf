/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex_cap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:18:52 by akurz             #+#    #+#             */
/*   Updated: 2021/07/21 09:37:54 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dec_to_hex_cap(unsigned int n, int *count)
{
	int	modulo;

	modulo = 0;
	if (n > 15)
		ft_dec_to_hex_cap(n / 16, count);
	modulo = n % 16;
	if (modulo > 9)
		ft_putchar(modulo + 55, count);
	else
		ft_putchar(modulo + 48, count);
}
