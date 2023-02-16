/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:19:59 by ajoala            #+#    #+#             */
/*   Updated: 2023/01/16 17:14:22 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_conversion(va_list args, char c)
{
	if (!args)
		return (0);
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), c));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			count += ft_conversion(args, fmt[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(fmt[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

/*
#include <stdio.h>
int	main(void)
{
	char				c;
	char				*str;
	int					n;
	unsigned int		u;
	int					count;
	int					count2;

	n = -1188;
	u = 4294967295;
	c = '%';
	str = "world!";
	ft_printf("ft_printf character: %c", c);
	ft_printf("\n");
	ft_printf("ft_printf string: %s", str);
	ft_printf("\n");
	ft_printf("ft_printf decimal: %d", n);
	ft_printf("\n");
	ft_printf("ft_printf unsigned: %u", u);
	ft_printf("\n");
	ft_printf("ft_printf hex: %x", n);
	ft_printf("\n");
	ft_printf("ft_printf HEX: %X", n);
	ft_printf("\n");
	ft_printf("ft_printf pointer: %p", &n);
	ft_printf("\n");
	count = ft_printf("all: %c %s %i %u %x %X %p %%", c, str, n, u, n, n, &n);
	ft_printf("\n");
	printf("count: %d", count);
	printf("\n");
	printf("\n");
	printf("printf character: %c\n", c);
	printf("printf string %s\n", str);
	printf("printf decimal: %d\n", n);
	printf("printf unsigned: %u\n", u);
	printf("printf hex %x\n", n);
	printf("printf HEX %X\n", n);
	printf("printf pointer %p\n", &n);
	count2 = printf("all: %c %s %i %u %x %X %p %%", c, str, n, u, n, n, &n);
	printf("\n");
	printf("count:  %d", count2);
	printf("\n");
	return (0);
}
*/