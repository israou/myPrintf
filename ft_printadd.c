/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:02:24 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/27 21:16:14 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadd(unsigned long n)
{
	char	*hexa;
	int		len;

	len = 0;
	hexa = "0123456789abcdef";
	if (n > 15)
	{
		len += ft_printadd(n / 16);
		len += ft_printadd(n % 16);
	}
	else
		len += ft_putchar(hexa[n]);
	return (len);
}
