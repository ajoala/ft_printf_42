/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:40:36 by ajoala            #+#    #+#             */
/*   Updated: 2023/01/09 14:25:11 by ajoala           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int				count;

	count = 0;
	if (n >= 10)
		count += ft_putunsigned(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
