/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:27:42 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/07 01:38:45 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int ft_putstr(char *str)
{
    if (!str)
    {
        ft_putstr("(null)");
        return (ft_strlen("(null)"));
    }
    write(1, str, ft_strlen(str));
    return (ft_strlen(str));
}
