/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguerand <vguerand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 15:15:50 by vguerand          #+#    #+#             */
/*   Updated: 2018/01/12 16:25:34 by vguerand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	compteur_size(long nbr)
{
	int size;

	size = 0;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size + 1);
}

static char	remplissage(int indice, long nbr)
{
	int i;

	i = 0;
	while (i < indice)
	{
		nbr = nbr / 10;
		i++;
	}
	return (nbr % 10 + '0');
}

char		*ft_itoa_unsigned(unsigned int n)
{
	int		neg;
	int		size;
	int		indice;
	char	*str;
	long	nbr;

	nbr = (long)n;
	neg = 0;
	indice = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		neg = 1;
	}
	size = compteur_size(nbr);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (size--)
	{
		str[size] = remplissage(indice, nbr);
		indice++;
	}
	str[indice] = '\0';
	return (str);
}

char		*ft_itoa(int n)
{
	int		neg;
	int		size;
	int		indice;
	char	*str;
	long	nbr;

	nbr = (long)n;
	neg = 0;
	indice = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		neg = 1;
	}
	size = compteur_size(nbr);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (size--)
	{
		str[size] = remplissage(indice, nbr);
		indice++;
	}
	str[indice] = '\0';
	return (str);
}
