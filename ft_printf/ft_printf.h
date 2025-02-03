/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamaras <ccamaras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 15:40:55 by ccamaras          #+#    #+#             */
/*   Updated: 2025/01/18 18:57:24 by ccamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_printf(const char *format, ...);
int			ft_putchar(va_list argcs);
int			ft_pritntstr(va_list argc);
int			ft_printp(va_list argcs);
int			ft_to_base(long long number, const char *base);
long long	ft_strlen(const char *phrase);

#endif