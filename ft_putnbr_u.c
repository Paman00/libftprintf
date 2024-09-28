/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:34:25 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/28 18:16:14 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int nbr)
{
	int		count;

	count = 0;
	if (nbr > 9)
		count += ft_putnbr_u(nbr / 10);
	count += ft_putchar((nbr % 10) + '0');
	return (count);
}
