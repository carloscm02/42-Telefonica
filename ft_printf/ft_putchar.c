/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 16:05:20 by ccamaras          #+#    #+#             */
/*   Updated: 2025/01/18 16:27:58 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(va_list argcs)
{
	char	c;

	c = va_arg(argcs, int);
	return (write(1, &c, 1));
}
