/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:58:47 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/26 16:52:52 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(unsigned int n, char *base, unsigned int *size,
		const char c)
{
	long int	li;
	int			baselen;

	if (c == 'X')
	{
		base = HEX_UP;
	}
	li = n;
	baselen = 0;
	while (base[baselen])
		baselen++;
	if (li / baselen == 0)
		ft_putchar(base[li % baselen], size);
	else
	{
		ft_putnbr_base(li / baselen, base, size, c);
		ft_putchar(base[li % baselen], size);
	}
}
