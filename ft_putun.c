/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 16:17:03 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/26 16:53:45 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putun(unsigned int n, unsigned int *size)
{
	if (n < 10)
	{
		ft_putchar((n + 48), size);
	}
	else
	{
		ft_putun((n / 10), size);
		ft_putun((n % 10), size);
	}
}
