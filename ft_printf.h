/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:31:04 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 02:14:50 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
#define FT_PRINTF_H


#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>



int ft_putchar(int c);
void ft_putnbr(int n, int *count);
void ft_putnbr_uns(unsigned int n, int *count);
void ft_puthexa(unsigned int n, int *count, char type);
void ft_pointer(unsigned long long int n, int *count);
int ft_putstr(char *str);
int ft_format(va_list ap, char index);
int ft_printf(const char *str, ...);

#endif
