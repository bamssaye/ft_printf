/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:40 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 00:06:31 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr(int n, int *count)
{
    long int nb;

    nb = n;
    if (nb < 0)
    {
        *count += ft_putchar('-');
        nb *= -1;
    }
    if (nb > 10)
    {
        ft_putnbr(nb / 10, count);
        ft_putnbr(nb % 10, count);
    }
    else
        *count += ft_putchar (nb + '0');
}
