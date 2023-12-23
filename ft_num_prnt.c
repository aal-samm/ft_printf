/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_prnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 06:36:30 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/23 18:32:03 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

static size_t	ft_num_len(int num )
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		len = 1;
		num = -num;
	}
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	ft_num_prnt(int num)
{
	long	count;
	char	*symbol;
	char	v;

	count = num;
	if (count < 0)
	{
		ft_putchar('-');
		count = -count;
	}
	if (count > 9)
		ft_num_prnt(count / 10);
	v = (count % 10) + '0';
	write (1, &v, 1);
	return (ft_num_len(num));
}

// int	main()
// {
// 	int	x;
// 	int	num;

// 	num = -14564;
// 	x = ft_num_prnt(num);
// 	// printf("\n%X, %d \n", 0xABCDEF, 12);
// 	printf("\n%d \n", x);

// 	 return (0);
// }
