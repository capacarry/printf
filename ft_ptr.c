/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:27:08 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/26 16:54:28 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_ptr(unsigned long int n, unsigned int *size)
{
	if (!n)
	{
		ft_putstring("(nil)", size);
		return ;
	}
	if (n < 16)
	{
		ft_putstring("0x", size);
		ft_putchar(HEX_LOW[n % 16], size);
		return ;
	}
	ft_ptr(n / 16, size);
	ft_putchar(HEX_LOW[n % 16], size);
}
