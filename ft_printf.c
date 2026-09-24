/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomec <sgomec@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 20:14:08 by sgomec            #+#    #+#             */
/*   Updated: 2026/09/19 14:58:37 by sgomec           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list lst, char format)
{
	int counter;

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
	va_list	lst;
	int	len;

	if (!format)
		return (-1);
	va_start(lst,format);
	len = 0;
	while (*format)
	{
		if (*format == '%' && format[1])
			len += ft_format(lst,*++format);
		else if (*format == '%' && !format[1])
			break ;
		else
			ft_printfchar(&len, *format);
		format++;
	}
	va_end(lst);
	return (len);
}
