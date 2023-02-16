/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:40:44 by ajoala            #+#    #+#             */
/*   Updated: 2023/01/14 19:39:04 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char c)
{
	char	*lchex;
	char	*uchex;
	int		count;

	lchex = "0123456789abcdef";
	uchex = "0123456789ABCDEF";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthex(n / 16, c);
		count += ft_puthex(n % 16, c);
	}
	else if (n < 16)
	{
		if (c == 'x')
			count += ft_putchar(lchex[n]);
		else if (c == 'X')
			count += ft_putchar(uchex[n]);
	}
	return (count);
}
