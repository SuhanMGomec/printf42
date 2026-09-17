/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomec <sgomec@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:51:19 by sgomec            #+#    #+#             */
/*   Updated: 2026/09/17 17:31:02 by sgomec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printfstr(int *counter, char *str)
{
	if (!str)
		write (1, "(null)", 6);
	*counter += 6;
	return ;
	while (*str)
	{
		write (1, str++, 1);
		(*counter)++;
	}
}
