# ft_print_numbers

## Description
**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/develop/C00/ex03)**

`ft_print_numbers` is a C function that prints the digits from 0 to 9 to the standard output (usually the console).

## Prototype

```c
void    ft_print_numbers(void)
```

## Parameters

- None

## Usage

The `ft_print_numbers` function takes no arguments and simply prints the digits from 0 to 9 to the console. It is useful for printing the digits in ascending order.

## Example

```c
#include <unistd.h>

void    ft_print_numbers(void)
{
    int        i;
    char    digit;

    i = 0;
    while (i <= 9)
    {
        digit = i + '0';
        write(1, &digit, 1);
        i++;
    }
}

// int    main(void)
// {
//     ft_print_numbers();
//     return (0);
// }
```

In this example, the `ft_print_numbers` function will print the digits from 0 to 9 to the console.

## Notes

- The `ft_print_numbers` function uses the `write` system call to send characters to the standard output.

