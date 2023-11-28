/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:24:48 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/28 16:54:07 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libc.h"

static int	ft_format(va_list ap, const char f, int len)
{
	if (f == 'c')
		len += ft_putchar(va_arg(ap, int));
	else if (f == 's')
		len += ft_putstr(va_arg(ap, char *));
	else if (f == 'd' || f == 'i')
		len += ft_putnbr(va_arg(ap, int));
	else if (f == 'X')
		len += ft_putuphexa(va_arg(ap, unsigned int));
	else if (f == 'x')
		len += ft_putlowhexa(va_arg(ap, unsigned int));
	else if (f == 'u')
		len += ft_printunsign(va_arg(ap, unsigned long));
	else if (f == 'p')
	{
		len += ft_putstr("0x");
		len += ft_printadd((unsigned long long)va_arg(ap, void *));
	}
	else if (f == '%')
		len += ft_putchar(f);
	else
		len += ft_putchar(f);
	return (len);
}

int	ft_printf(const char *f, ...)
{
	int		len;
	int		i;
	int		r;
	va_list	ap;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(ap, f);
	i = -1;
	len = 0;
	r = 0;
	while (f[++i])
	{
		if (f[i] == '%' && f[i + 1])
		{
			len += ft_format(ap, f[i + 1], r);
			i++;
		}
		else if (f[i] == '%')
			continue ;
		else
			len += ft_putchar(f[i]);
	}
	va_end(ap);
	return (len);
}
