/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:50:04 by ccamaras          #+#    #+#             */
/*   Updated: 2025/01/18 18:57:47 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number_of_pointer(uintptr_t number, const char *base)
{
	int	i;

	i = 0;
	if (number >= 16)
	{
		i += ft_print_number_of_pointer(number / 16, base);
		i += ft_print_number_of_pointer(number % 16, base);
	}
	else
	{
		write(1, &base[number], 1);
		i++;
	}
	return (i);
}

int	ft_printp(va_list argcs)
{
	void	*ptr;

	ptr = va_arg(argcs, void *);
	if (!ptr)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (ft_print_number_of_pointer((uintptr_t)ptr, "0123456789abcdef") + 2);
}
