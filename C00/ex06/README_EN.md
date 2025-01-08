

# ft_print_comb2

## Description
**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/main/C00/ex06)**

`ft_print_comb2` is a function in C that prints all possible combinations of two digits in ascending order to the standard output.

## Prototype

```c
void	ft_print_comb2(void)
```

## Parameters

- None

## Usage

The `ft_print_comb2` function does not take any arguments and simply prints all possible combinations of two digits in ascending order. It is useful for printing digit combinations in a specific format.

## Example

```c
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
```

In this example, the `ft_print_comb2` function will print all possible combinations of two digits in ascending order to the console.

## Notes

- The `ft_print_comb2` function uses the system call `write` to send characters to the standard output.
- It is a useful function for printing digit combinations in a specific format, especially when working with search algorithms or combination generation.