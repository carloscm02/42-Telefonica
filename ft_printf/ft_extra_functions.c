/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra_functions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:58:53 by ccamaras          #+#    #+#             */
/*   Updated: 2025/01/18 18:57:57 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_to_base(long long number, const char *base)
{
	int	i;

	i = 0;
	if (number < 0)
	{
		write(1, "-", 1);
		i++;
		number *= -1;
	}
	if (number >= ft_strlen(base))
	{
		i += ft_to_base(number / ft_strlen(base), base);
		i += ft_to_base(number % ft_strlen(base), base);
	}
	else
	{
		write(1, &base[number], 1);
		i++;
	}
	return (i);
}

long long	ft_strlen(const char *phrase)
{
	long long	i;

	i = 0;
	while (*phrase)
	{
		i++;
		phrase++;
	}
	return (i);
}
