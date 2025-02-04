/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pntr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 21:52:45 by fouaouri          #+#    #+#             */
/*   Updated: 2023/02/13 03:02:54 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_pntr(unsigned long int n)
{
	int	x;

	x = 0;
	x += ft_putstr("0x");
	x += ft_lower_hex(n);
	return (x);
}
