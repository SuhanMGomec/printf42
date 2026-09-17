/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomec <sgomec@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 18:43:07 by sgomec            #+#    #+#             */
/*   Updated: 2026/09/17 20:10:09 by sgomec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_printfchar(int *counter, char c);
void	ft_printfhex(int *counter, unsigned long n, char format);
void	ft_printfstr(int *counter, char *str);
void	ft_printfptr(int *counter, void *ptr);
void	ft_printfputnbr(int *counter, int nbr);
void	ft_printfusgputnbr(int *counter, unsigned int nbr);

#endif