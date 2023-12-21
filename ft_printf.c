/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:38:40 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/21 13:43:14 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.h"

int	ft_printf(const	char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			ft_putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				ft_putchar(va_arg(ap, int));
				count++;
			}
			else if (*format == 's')
			{
				ft_putstr(va_arg(ap, char *));
				count += ft_strlen(va_arg(ap, char *));
			}
			else if (*format == 'd')
			{
				ft_putstr(ft_itoa(va_arg(ap, int)));
				count += ft_count(va_arg(ap, int));
			}
			else if (*format == 'x')
			
		}
		format++;
	}
	va_end(ap);
	return (count);
}
int main ()
{
	 int i;
	 int v;
	int u = 123456;

	// char *x = "i want it that wat";
	i =printf("the original value is %d\n", u);
	v = ft_printf("the original value is %d\n", u);
	printf("original %d, \n new is %d", i, v);
	return (0);
}
