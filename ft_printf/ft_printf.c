/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:42:22 by ccamaras          #+#    #+#             */
/*   Updated: 2025/01/18 18:57:24 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char *format, va_list argcs, int i)
{
	if (format[i] == 'c')
		return (ft_putchar(argcs));
	else if (format[i] == 's' )
		return (ft_pritntstr(argcs));
	else if (format[i] == 'p')
		return (ft_printp(argcs));
	else if (format[i] == 'd')
		return (ft_to_base(va_arg(argcs, int), "0123456789"));
	else if (format[i] == 'i')
		return (ft_to_base(va_arg(argcs, int), "0123456789"));
	else if (format[i] == 'u')
		return (ft_to_base(va_arg(argcs, unsigned int), "0123456789"));
	else if (format[i] == 'x')
		return (ft_to_base(va_arg(argcs, unsigned int), "0123456789abcdef"));
	else if (format[i] == 'X')
		return (ft_to_base(va_arg(argcs, unsigned int), "0123456789ABCDEF"));
	else if (format[i] == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	argcs;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(argcs, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_format(format, argcs, i);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(argcs);
	return (count);
}
