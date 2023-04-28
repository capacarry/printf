/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcapa-pe <gcapa-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:57:27 by gcapa-pe          #+#    #+#             */
/*   Updated: 2023/04/26 16:55:52 by gcapa-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, unsigned int *size);
void	ft_putstring(char *str, unsigned int *size);
void	ft_putnbr(int nb, unsigned int *size);
void	ft_putnbr_base(unsigned int n, char *base, unsigned int *size,
			const char c);
void	ft_putun(unsigned int n, unsigned int *size);
void	ft_ptr(unsigned long int ptr, unsigned int *size);

#endif
