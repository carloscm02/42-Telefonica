/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:29:30 by ccamaras          #+#    #+#             */
/*   Updated: 2024/10/01 14:05:28 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_minnumber(void)
{
	write(1, "2147483648", 10);
}

void	print_number(int cent, int copia)
{
	int	number_letter;

	while (cent)
	{
		number_letter = (copia / cent % 10) + '0';
		write(1, &number_letter, 1);
		cent /= 10;
	}
}

void	ft_putnbr(int nb)
{
	int	copia;
	int	cent;

	copia = nb;
	cent = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		copia = nb;
	}
	if (nb == -2147483648)
	{
		print_minnumber();
		return ;
	}
	while (copia >= 10)
	{
		copia = copia / 10;
		cent *= 10;
	}
	print_number(cent, nb);
}

// int	main(void)
// {
// 	ft_putnbr(57867);
// 	return (0);
// }