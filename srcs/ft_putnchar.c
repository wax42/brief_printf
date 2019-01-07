/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 16:02:23 by vguerand          #+#    #+#             */
/*   Updated: 2017/12/22 16:02:42 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_putnchar(char c, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(c);
		i++;
	}
	return (n);
}
