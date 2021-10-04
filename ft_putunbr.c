/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 10:03:48 by akurz             #+#    #+#             */
/*   Updated: 2021/07/21 09:39:28 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *count)
{
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0', count);
	}
	else if (n > 9)
	{
		ft_putunbr(n / 10, count);
		ft_putunbr(n % 10, count);
	}
}
