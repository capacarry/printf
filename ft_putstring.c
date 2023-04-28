/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 14:54:53 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/26 16:54:18 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstring(char *str, unsigned int *size)
{
	unsigned int	i;

	i = 0;
	if (!str)
	{
		ft_putstring("(null)", size);
		return ;
	}
	while (str[i])
	{
		ft_putchar(str[i], size);
		i++;
	}
}
