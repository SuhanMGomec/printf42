/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfputnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomec <sgomec@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:10:06 by sgomec            #+#    #+#             */
/*   Updated: 2026/10/31 15:07:55 by sgomec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfputnbr(int *counter, int nbr)
{
	long	nb;
	char	c;

	nb = nbr;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
		*counter += 1;
	}
	if (nb <= 9)
	{
		c = nb + '0';
		write (1, &c, 1);
		(*counter)++;
	}
	else
	{
		ft_printfputnbr(nb / 10);
		ft_printfputnbr(nb % 10);
	}
}
