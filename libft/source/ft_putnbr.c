/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgajean <cgajean@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 19:21:03 by cgajean           #+#    #+#             */
/*   Updated: 2025/05/16 11:22:30 by cgajean          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_printnbr(int nbr, int *count)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		*count += 1;
	}
	if (nb >= 10)
	{
		ft_printnbr(nb / 10, count);
		ft_printnbr(nb % 10, count);
	}
	else
		*count += ft_putchar("0123456789"[nb]);
}

int	ft_putnbr(int nbr)
{
	int	count;

	count = 0;
	ft_printnbr(nbr, &count);
	return (count);
}
