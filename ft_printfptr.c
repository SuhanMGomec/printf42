/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomec <sgomec@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 17:36:12 by sgomec            #+#    #+#             */
/*   Updated: 2026/09/17 18:06:29 by sgomec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfptr(int *counter, void *ptr)
{
	if (!ptr)
	{
		write (1, "(nil)", 5);
		*counter += 5;
		return ;
	}
	write (1, "0x", 2);
	*counter += 2;
	ft_printfhex(counter, ptr, 'x');
}
