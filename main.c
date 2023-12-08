/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 03:36:12 by bamssaye          #+#    #+#             */
/*   Updated: 2023/12/08 17:18:40 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	// printf(" %i \n", 0);
	// printf(" %i \n", -1);
	// printf(" %i \n", 1);
	// printf(" %i \n", 9);
	// printf(" %i \n", 10);
	// printf(" %i \n", 11);
	// printf(" %i \n", 15);
	// printf(" %i \n", 16);
	// printf(" %i \n", 17);
	// printf("\n =============== \n");
	// ft_printf(" %X \n", 24524);

	int i = printf("%p", 0);
	printf("\n%d", i);
	printf("\n");
	int j = ft_printf("%p", 0);
	ft_printf("\n%d", j);
	// ft_printf(" %i \n", 9);
	// ft_printf(" %i \n", 10);
	// ft_printf(" %i \n", 11);
	// ft_printf(" %i \n", 15);
	// ft_printf(" %i \n", 16);
	// ft_printf(" %i \n", 17);
}