# ft_print_combn

## Description
**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/main/C00/ex08)**

`ft_print_combn` is a function in C that prints all possible combinations of `n` digits in ascending order to the standard output.

## Prototype

```c
void	ft_print_combn(int n);
```

## Parameters

- `n`: the number of digits to be printed.

## Usage

The `ft_print_combn` function takes an integer `n` as an argument and prints all possible combinations of `n` digits in ascending order to the console. It is useful for printing digit combinations in a specific format.

## Example
```c
#include <unistd.h>

void	pintar(int number, int lgth, int entero)
{
	int	max_decimal;
	int	char_real_decimal;

	max_decimal = 1;
	while (lgth > 1)
	{
		max_decimal *= 10;
		lgth--;
	}
	while (max_decimal)
	{
		char_real_decimal = (number / max_decimal) % 10 + '0';
		write(1, &char_real_decimal, 1);
		max_decimal /= 10;
	}
	if (entero)
	{
		write(1, ", ", 2);
	}
}

int	get_left_number(int number, int lgth)
{
	int	i;
	int	cent;

	i = 1;
	cent = 1;
	while (i < lgth)
	{
		cent *= 10;
		i++;
	}
	return (number / cent);
}

int	sumar_decimal(int number, int cr_posit)
{
	int	n_numb;
	int	bs_num;
	int	reset_numb;

	n_numb = number + cr_posit;
	cr_posit = cr_posit / 10;
	while (cr_posit)
	{
		reset_numb = (n_numb / cr_posit) % 10;
		bs_num = (n_numb / (cr_posit * 10)) % 10;
		n_numb = n_numb - reset_numb * cr_posit + (bs_num + 1) * cr_posit;
		cr_posit /= 10;
	}
	return (n_numb);
}

// in numb[0] decimal number (1, 10, 100)
// in numb[1] zero number (0, 1, 2...)
// in numb[2] real number
void	ft_print_combn(int nb)
{
	int	numb[3];
	int	i;

	i = 0;
	numb[2] = 0;
	while (i < nb)
		numb[2] = numb[2] * 10 + i++;
	numb[0] = 1;
	numb[1] = 0;
	while ((get_left_number(numb[2], nb) + nb - 1) < 9)
	{
		if ((numb[2] / numb[0]) % 10 == 9 - numb[1])
		{
			numb[0] *= 10;
			numb[1]++;
		}
		else
		{
			pintar(numb[2], nb, 1);
			numb[2] = sumar_decimal(numb[2], numb[0]);
			numb[0] = 1;
			numb[1] = 0;
		}
	}
	pintar(numb[2], nb, 0);
}

// int	main(void)
// {
// 	ft_print_combn(2);
// 	return (0);
// }
```

In this example, the `ft_print_combn` function will print all possible combinations of two digits to the console.

## Notes

- The `ft_print_combn` function uses the system call `write` to send characters to the standard output.