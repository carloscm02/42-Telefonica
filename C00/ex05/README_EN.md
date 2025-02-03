# ft_print_comb

## Description
**[ver en español 🇪🇸](https://github.com/carloscm02/42-Telefonica/tree/main/C00/ex05)**

`ft_print_comb` is a C function that prints all possible combinations of three different digits in ascending order to the standard output (usually the console).

## Prototype

```c
void    ft_print_comb(void)
```

## Parameters

- None

## Usage

The `ft_print_comb` function takes no arguments and simply prints all possible combinations of three different digits in ascending order. It is useful for printing digit combinations in a specific format.

## Example

```c
#include <unistd.h>

void    ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0';
    while (a < '8')
    {
        b = a + 1;
        while (b < '9')
        {
            c = b +1;
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if ((a != '7'))
                    write(1, ", ", 2);
                c++;
            }
            b++;
        }
        a++;
    }
}

// int    main(void)
// {
//     ft_print_comb();
//     return (0);
// }
```

In this example, the `ft_print_comb` function will print all possible combinations of three different digits in ascending order to the console.

## Notes

- The `ft_print_comb` function uses the `write` system call to send characters to the standard output.

