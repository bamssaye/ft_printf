/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:38 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 02:16:51 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_pointer(unsigned long long int n)
{
    char *hexl;
    int count;
 
    count = 0;
    hexl = "0123456789abcdef";
    if (n > 16)
    {
        ft_pointer(n / 16);
        ft_pointer(n % 16);
    }
    else
        count += ft_putchar (hexl[n]);
    return (count);
}
