/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:38 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 04:19:26 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_puth(unsigned long long int n, int *count)
{
    char    *hexl;

    hexl = "0123456789abcdef";
    if (n >= 16)
    {
        ft_puth((n / 16), count);
        ft_puth((n % 16), count);
    }
    else
        *count += ft_putchar (hexl[n]);
}

void ft_pointer(unsigned long long int n, int *count)
{
    if (!n)
        *count += (ft_putstr("(nil)"));
    else
    {   
        *count += ft_putstr("0x");
        ft_puth(n, count);
    }
}
