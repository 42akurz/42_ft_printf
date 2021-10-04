/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akurz <akurz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:29:54 by akurz             #+#    #+#             */
/*   Updated: 2021/07/21 09:37:14 by akurz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putnbr(int n, int *count);
void	ft_dec_to_hex(unsigned int n, int *count);
void	ft_dec_to_hex_cap(unsigned int n, int *count);
void	ft_putunbr(unsigned int n, int *count);
void	ft_putpointer(void *ptr, int *count);

#endif
