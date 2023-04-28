/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:56:26 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/26 16:55:54 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_conv(const char c, va_list args, unsigned int *size)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), size);
	else if (c == 's')
		ft_putstring(va_arg(args, char *), size);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), size);
	else if (c == '%')
		ft_putchar('%', size);
	else if (c == 'x' || c == 'X')
		ft_putnbr_base(va_arg(args, unsigned int), HEX_LOW, size, c);
	else if (c == 'u')
		ft_putun(va_arg(args, unsigned int), size);
	else if (c == 'p')
		ft_ptr(va_arg(args, unsigned long int), size);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			ft_conv(str[++i], args, &size);
		else
			ft_putchar(str[i], &size);
		i++;
	}
	va_end(args);
	return (size);
}
