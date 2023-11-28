/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:36:16 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/27 21:16:53 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuphexa(unsigned int n)
{
	int		len;
	char	*hexa;

	len = ft_hexalen(n);
	hexa = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n > 15)
	{
		ft_putuphexa(n / 16);
	}
	ft_putchar(hexa[n % 16]);
	return (len);
}
