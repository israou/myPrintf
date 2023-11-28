/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:32:11 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/28 16:46:07 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsign(unsigned int n)
{
	int		len;

	len = ft_lenghtnumb(n);
	if (n > 9)
	{
		ft_printunsign(n / 10);
		ft_printunsign(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (len);
}
