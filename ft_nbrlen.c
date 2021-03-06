/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 13:43:10 by vguerand          #+#    #+#             */
/*   Updated: 2018/01/19 01:19:22 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(int n, int base)
{
	int i;

	i = 1;
	while (n > base - 1)
	{
		n = n / base;
		i++;
	}
	return (i);
}
