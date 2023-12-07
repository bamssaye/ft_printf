/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:06:08 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 04:28:38 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_uns(unsigned int n, int *count)
{
    long int nb;

    nb = n;
    if (nb >= 10)
    {
        ft_putnbr(nb / 10, count);
        ft_putnbr(nb % 10, count);
    }
    else
        *count += ft_putchar (nb + '0');
}