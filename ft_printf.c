/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:38:40 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/25 20:28:59 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_case(const char holder, va_list ap)
{
	int		count;

	count = 0;
	if (holder == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (holder == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (holder == 'p')
		count += ft_addr_prnt(va_arg(ap, void *));
	else if (holder == 'd')
		count += ft_num_prnt(va_arg(ap, int));
	else if (holder == 'i')
		count += ft_num_prnt(va_arg(ap, int));
	else if (holder == 'u')
		count += ft_unsigned_num_prnt((unsigned int)va_arg(ap, int));
	else if (holder == 'x')
		count += ft_hex_prnt(va_arg(ap, size_t), false);
	else if (holder == 'X')
		count += ft_hex_prnt(va_arg(ap, size_t), true);
	else if (holder == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const	char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	if (!format)
		return (0);
	while (*format != '\0')
	{
		if (*format != '%')
			count += ft_putchar(*format);
		else
		{
			format++;
			count += ft_case(*format, ap);
		}
		if (count < 0)
			return (-1);
		format++;
	}
	va_end(ap);
	return (count);
}

		// if (count < 0)
		// 	return (-1);
// int main ()
// {
// 	//  int i = 0;
// 	 int v;
// 	// int u = -50;
// 	// void *s =&i;

// 	// // char *x = "i want it that wat";
// 	// i =    printf("%p dsnkadsfkl", NULL);
// 	v = ft_printf("%p dsnkadsfkl", NULL);
// 	// printf("original %d, \nfunction %d", i, v);
// 	return (0);
// }
