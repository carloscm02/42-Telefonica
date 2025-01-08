# ft_is_negative

## Description
**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/develop/C00/ex04)**

`ft_is_negative` is a C function that prints the letter 'N' if the given number is negative, and the letter 'P' if it is positive or zero.

## Prototype

```c
void    ft_is_negative(int n)
```

## Parameters

- `n`: The number to be checked.

## Usage

The `ft_is_negative` function takes an integer as an argument and determines whether it is negative. If the number is less than zero, it prints the letter 'N' to the console. If the number is zero or greater, it prints the letter 'P' to the console.

## Example

```c
#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n < 0)
        write(1, "N", 1);
    else
        write(1, "P", 1);
}

// int    main(void)
// {
//     ft_is_negative(-5);
//     return (0);
// }
```

In this example, the `ft_is_negative` function will print the letter 'N' to the console since the given number is negative.

## Notes

- The `ft_is_negative` function uses the `write` system call to send characters to the standard output.
