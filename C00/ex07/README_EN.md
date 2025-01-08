# ft_putnbr

## Description
**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/main/C00/ex07)**

`ft_putnbr` is a function in C that prints an integer to the standard output (typically the console).

## Prototype

```c
void	ft_putnbr(int nb);
```

## Parameters

- `nb`: the integer to be printed.

## Usage

The `ft_putnbr` function takes an integer as an argument and prints it to the console. It is useful for printing integers to the console.

## Example

```c
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
```

In this example, the `ft_putnbr` function will print the number `57867` to the console.

## Notes

- The `ft_putnbr` function uses the system call `write` to send characters to the standard output.
- The `ft_putnbr` function correctly handles the minimum value of a 32-bit integer, `-2147483648`.