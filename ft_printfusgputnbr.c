/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfusgputnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomec <sgomec@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:28:22 by sgomec            #+#    #+#             */
/*   Updated: 2026/10/31 15:25:50 by sgomec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfusgputnbr(int *counter, unsigned int nbr)
{
	char	c;

	if (nbr <= 9)
	{
		c = nbr + '0';
		write (1, &c, 1);
		(*counter)++;
	}
	else
	{
		ft_printfusgputnbr(counter, nbr / 10);
		ft_printfusgputnbr(counter, nbr % 10);
	}
}
