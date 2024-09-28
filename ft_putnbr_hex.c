/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:41:51 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/28 19:21:08 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	get_char_hex(int i, int is_cap)
{
	if (is_cap)
		return ("0123456789ABCDEF"[i]);
	return ("0123456789abcdef"[i]);
}

int	ft_putnbr_hex(unsigned long nbr, int is_cap)
{
	int		count;

	count = 0;
	if (nbr > 15)
		count += ft_putnbr_hex(nbr / 16, is_cap);
	count += ft_putchar(get_char_hex(nbr % 16, is_cap));
	return (count);
}
