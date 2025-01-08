# ft_print_reverse_alphabet

## Description
**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/develop/C00/ex03)**

`ft_print_reverse_alphabet` is a C function that prints the lowercase alphabet in descending order to the standard output (usually the console).

## Prototype

```c
void    ft_print_reverse_alphabet(void)
```

## Parameters

- None

## Usage

The `ft_print_reverse_alphabet` function takes no arguments and simply prints the lowercase alphabet in descending order. It is useful for printing the complete alphabet in reverse order to the console.

## Example

```c
#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    int    i;

    i = 122;
    while (i >= 97)
    {
        write(1, &i, 1);
        i--;
    }
}

// int    main(void)
// {
//     ft_print_reverse_alphabet();
//     return (0);
// }
```

In this example, the `ft_print_reverse_alphabet` function will print the lowercase alphabet in descending order to the console.

## Notes

- The `ft_print_reverse_alphabet` function uses the `write` system call to send the characters to the standard output.
- It is a basic yet fundamental function in C programming, especially when working with low-level functions that require precise control over character output.
