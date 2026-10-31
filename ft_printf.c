/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomec <sgomec@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:14:08 by sgomec            #+#    #+#             */
/*   Updated: 2026/10/31 15:21:24 by sgomec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list lst, char format)
{
	int	counter;

	counter = 0;
	if (format == 'c')
		ft_printfchar(&counter, va_arg(lst, int));
	else if (format == 's')
		ft_printfstr(&counter, va_arg(lst, char *));
	else if (format == 'p')
		ft_printfptr(&counter, va_arg(lst, void *));
	else if (format == 'd' || format == 'i')
		ft_printfputnbr(&counter, va_arg(lst, int));
	else if (format == 'u')
		ft_printfusgputnbr(&counter, va_arg(lst, unsigned int));
	else if (format == 'x' || format == 'X')
		ft_printfhex(&counter, va_arg(lst, unsigned int), format);
	else if (format == '%')
		ft_printfchar(&counter, '%');
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	if (!format)
		return (-1);
	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			ft_printfchar(&len, *format);
		else if (format[1])
			len += ft_format(args, *++format);
		else
			break ;
		format++;
	}
	va_end(args);
	return (len);
}
