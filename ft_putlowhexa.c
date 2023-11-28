/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlowhexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:51:23 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/27 21:18:22 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlowhexa(unsigned int n)
{
	char	*hexa;
	int		len;

	len = ft_hexalen(n);
	hexa = "0123456789abcdef";
	if (n < 0)
	{
		write (1, "-", 1);
		n *= -1;
	}
	if (n > 15)
	{
		ft_putlowhexa(n / 16);
	}
	ft_putchar(hexa[n % 16]);
	return (len);
}
