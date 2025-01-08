## Description
**[ver en español 🇪🇸](##Descripción)**

`ft_print_alphabet` is a C function that prints the lowercase alphabet in ascending order to the standard output (usually the console).

## Prototype

```c
void	ft_print_alphabet(void)
```

## Parameters

- None

## Usage

The `ft_print_alphabet` function takes no arguments and simply prints the lowercase alphabet in ascending order. It is useful for printing the entire alphabet to the console.

## Example

```c
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
```

In this example, the `ft_print_alphabet` function will print the lowercase alphabet in ascending order to the console.

## Notes

- The `ft_print_alphabet` function uses the `write` system call to send the characters to the standard output.
- It is a basic but fundamental function in C programming, especially when working with lower-level functions that require precise control over character output.
