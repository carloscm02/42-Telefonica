# ft_print_reverse_alphabet

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex03/README_EN.md)**

`ft_print_reverse_alphabet` es una función en C que imprime el alfabeto en minúsculas en orden descendente en la salida estándar (normalmente la consola).

## Prototipo

```c
void	ft_print_reverse_alphabet(void)
```

## Parámetros

- Ninguno

## Uso

La función `ft_print_reverse_alphabet` no toma ningún argumento y simplemente imprime el alfabeto en minúsculas en orden descendente. Es útil para imprimir el alfabeto completo en la consola en orden inverso.

## Ejemplo

```c
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
    int	i;

    i = 122;
    while (i >= 97)
    {
        write(1, &i, 1);
        i--;
    }
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return (0);
// }
```

En este ejemplo, la función `ft_print_reverse_alphabet` imprimirá el alfabeto en minúsculas en orden descendente en la consola.

## Notas

- La función `ft_print_reverse_alphabet` utiliza la llamada al sistema `write` para enviar los caracteres a la salida estándar.
- Es una función básica pero fundamental en la programación en C, especialmente cuando se trabaja con funciones de nivel inferior que requieren control preciso sobre la salida de caracteres.