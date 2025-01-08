# ft_putchar

## Descripción
**[see it in english 🏴󠁧󠁢󠁥󠁮󠁧󠁿](https://github.com/carloscm02/42-Telefonica/blob/main/C00/ex00/README_EN.md)**

`ft_putchar` es una función en C que se utiliza para imprimir un solo carácter en la salida estándar (normalmente la consola).

## Prototipo

```c
void	ft_putchar(char c)
```

## Parámetros

- `c`: El carácter que se desea imprimir.

## Uso

La función `ft_putchar` toma un carácter como argumento y lo envía a la salida estándar. Es útil para imprimir caracteres individuales, especialmente en el contexto de otras funciones que manejan cadenas de texto o caracteres.

## Ejemplo

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

En este ejemplo, la función `ft_putchar` imprimirá el carácter `c` en la consola.

## Notas

- La función `ft_putchar` utiliza la llamada al sistema `write` para enviar el carácter a la salida estándar.
- Es una función básica pero fundamental en la programación en C, especialmente cuando se trabaja con funciones de nivel inferior que requieren control preciso sobre la salida de caracteres.
