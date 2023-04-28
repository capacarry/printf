/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 17:24:06 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/26 16:53:54 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, unsigned int *size)
{
	if (n == -2147483648)
	{
		ft_putchar('-', size);
		ft_putchar('2', size);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-', size);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr((n / 10), size);
		ft_putnbr((n % 10), size);
	}
	else
		ft_putchar((n + 48), size);
}
