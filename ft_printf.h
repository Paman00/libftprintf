/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migugar2 <migugar2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:43:41 by migugar2          #+#    #+#             */
/*   Updated: 2024/09/28 19:21:38 by migugar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putnbr_hex(unsigned long nbr, int is_cap);
int	ft_putnbr_u(unsigned int nbr);
int	ft_putnbr(int nbr);
int	ft_putptr(void *ptr);
int	ft_putstr(char *str);

int	ft_printf(char const *format, ...);

#endif
