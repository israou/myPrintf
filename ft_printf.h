/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichaabi <ichaabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:25:02 by ichaabi           #+#    #+#             */
/*   Updated: 2023/11/28 16:46:15 by ichaabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_putnbr(long n);
int		ft_lenghtnumb(long long n);
int		ft_printunsign(unsigned int n);
int		ft_hexalen(long long n);
int		ft_putlowhexa(unsigned int n);
int		ft_putuphexa(unsigned int n);
int		ft_printadd(unsigned long n);
int		ft_printf(const char *f, ...);

#endif
