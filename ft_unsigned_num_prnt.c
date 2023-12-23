/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_num_prnt.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:37:34 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/23 18:32:22 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

static size_t	ft_num_len(unsigned int num )
{
	size_t	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

int	ft_unsigned_num_prnt(unsigned int num)
{
	int		count;
	char	v;

	count = num;
	if (count > 9)
		ft_num_prnt(count / 10);
	v = (count % 10) + '0';
	write (1, &v, 1);
	return (ft_num_len(num));
}
// int	main()
// {
// 	unsigned int	x;
// 	unsigned int	num;

// 	num = 80;
// 	x = ft_unsigned_num_prnt(num);
// 	printf("\n %d \n", x);

// 	 return (0);
// }