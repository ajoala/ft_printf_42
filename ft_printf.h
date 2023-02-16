/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:15:10 by ajoala            #+#    #+#             */
/*   Updated: 2023/01/14 19:39:25 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *fmt, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_puthex(unsigned long n, char c);
int	ft_putnbr(int n);
int	ft_putptr(unsigned long n);
int	ft_putunsigned(unsigned int n);

#endif