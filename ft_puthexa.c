/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:38 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 03:57:44 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_puthexa(unsigned int n, int *count, char type)
{
    char    *hexl;
    char    *hexu;
    char    *hexa;

    hexu = "0123456789ABCDEF";
    hexl = "0123456789abcdef";
    if(type == 'x')
        hexa = hexl;
    else if(type == 'X')
        hexa = hexu;
    if (n >= 16)
    {
        ft_puthexa((n / 16), count, type);
        ft_puthexa((n % 16), count, type);
    }
    else
        *count += ft_putchar (hexa[n]);
}

