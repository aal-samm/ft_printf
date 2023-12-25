/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_prnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:44:02 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/25 13:07:01 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_hex_len(unsigned int num )
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len += 1;
		num /= 16;
	}
	return (len);
}

int	ft_hex_prnt(unsigned int num, bool upper_c)
{
	char	*upper;
	char	*lower;

	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	if (num >= 16)
	{
		ft_hex_prnt (num / 16, upper_c);
	}
	if (upper_c == true)
		write (1, &upper[num % 16], 1);
	else
		write (1, &lower[num % 16], 1);
	return (ft_hex_len(num));
}

// int	main()
// {
// 	int				x;
// 	unsigned int	num;

// 	num = -80;
// 	x = ft_hex_prnt(num, 1);
// 	// printf("\n%X, %d \n", 0xABCDEF, 12);
// 	printf("\n%d \n", x);
// 	x= printf("%X\n", num);
// 	printf("%d", x);
// 	 return (0);
// }