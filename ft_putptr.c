/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:05:25 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/28 19:40:01 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	ft_putptr(void *ptr)
{
	unsigned long	hex;
	int				count;

	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	hex = (unsigned long)ptr;
	count = 0;
	count += ft_putstr("0x");
	count += ft_putnbr_hex(hex, 0);
	return (count);
}
