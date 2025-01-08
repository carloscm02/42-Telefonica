## Description

**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/main/C00/ex00)**

`ft_putchar` is a C function used to print a single character to the standard output (usually the console).

## Prototype

```c
void	ft_putchar(char c)
```

## Parameters

- `c`: The character to print.

## Usage

The `ft_putchar` function takes a character as an argument and sends it to the standard output. It is useful for printing individual characters, especially in the context of other functions that handle text strings or characters.

## Example

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar('a');
// 	return (0);
// }
```

In this example, the `ft_putchar` function will print the character `c` to the console.


## Notes

- The `ft_putchar` function uses the `write` system call to send the character to the standard output.
- It is a basic but fundamental function in C programming, especially when working with lower-level functions that require precise control over character output.