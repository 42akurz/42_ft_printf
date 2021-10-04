/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:18:04 by akurz             #+#    #+#             */
/*   Updated: 2021/07/24 13:51:43 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_specifier(va_list argptr, char c, int *count)
{
	if (c == 'i' || c == 'd')
		ft_putnbr(va_arg(argptr, int), count);
	else if (c == 's')
		ft_putstr(va_arg(argptr, char *), count);
	else if (c == 'c')
		ft_putchar(va_arg(argptr, int), count);
	else if (c == 'p')
		ft_putpointer(va_arg(argptr, void *), count);
	else if (c == 'u')
		ft_putunbr(va_arg(argptr, unsigned int), count);
	else if (c == 'x')
		ft_dec_to_hex(va_arg(argptr, unsigned int), count);
	else if (c == 'X')
		ft_dec_to_hex_cap(va_arg(argptr, unsigned int), count);
	else if (c == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start (argptr, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_format_specifier(argptr, format[i], &count);
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end (argptr);
	return (count);
}

// printf("djhfuieuhfjdoisjd : %i")
