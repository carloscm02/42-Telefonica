/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:12:47 by ccamaras          #+#    #+#             */
/*   Updated: 2024/09/30 15:01:25 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_complete_number(char a_or_b_complete[2], int amount)
{
	if (amount < 10)
	{
		write(1, "0", 1);
		write(1, &a_or_b_complete[1], 1);
	}
	else
	{
		write(1, &a_or_b_complete[0], 1);
		write(1, &a_or_b_complete[1], 1);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	a_letra[2];
	char	b_letra[2];

	a = 0;
	while (a < 99)
	{
		b = a +1;
		while (b < 100)
		{
			a_letra[0] = a / 10 + '0';
			a_letra[1] = a % 10 + '0';
			b_letra[0] = b / 10 + '0';
			b_letra[1] = b % 10 + '0';
			write_complete_number(a_letra, a);
			write(1, " ", 1);
			write_complete_number(b_letra, b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }