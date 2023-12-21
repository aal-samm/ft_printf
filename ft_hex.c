/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:44:02 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/21 20:09:08 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.h"

int	ft_hex_len(unsigned int num )
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

int	ft_hex_prnt(unsigned int num, bool upper_c)
{
	int		count;
	char	*upper;
	char 	*lower;

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

int main ()
{
	int				x;
	unsigned int	num;

	num = 0xABCDEF;
	x = (ft_hex_prnt(num, 0));
	printf("%d", x);
	return (0);
}