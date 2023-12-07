/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:12:06 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 02:15:20 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format(va_list ap, char index)
{
    char *type;
    int count;
    
    count = 0;
    type = "cspdiuxX%";
    if(type[0] == index)
        count += ft_putchar(va_arg(ap, int));
    else if (type[1] == index)
        count += ft_putstr(va_arg(ap, char*));
    else if ((type[3] == index) || (type[4] = index))
        ft_putnbr (va_arg(ap, int), &count);
    else if (type[5] == index)
        ft_putnbr_uns(va_arg(ap, int), &count);
    else if ((type[6] == index) || (type[7] == index))
        ft_puthexa(va_arg(ap, unsigned int), &count, index);
    else if (type[2] == index)
    {
        count += ft_putstr("0x");
        count += ft_pointer(va_arg(ap, unsigned long long int));
    }
    else if (type[8] == index)
        count += ft_putchar(va_arg(ap, int));
    return (count);
}