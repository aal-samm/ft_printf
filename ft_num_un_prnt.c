/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_un_prnt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:37:34 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/27 13:17:25 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_num_len(unsigned int num)
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

int	ft_num_un_prnt(unsigned int num)
{
	unsigned int		count;
	char				c;

	count = num;
	if (count > 9)
		ft_num_un_prnt(count / 10);
	c = (count % 10) + '0';
	write (1, &c, 1);
	return (ft_num_len(num));
}

// int	ft_unsigned_num_prnt(unsigned int num)
// {
// 	ft_unsigned_num(num);
// 	return (ft_num_len(num));
// }
// int	main()
// {
// 	int s;
// 	unsigned int	x;
// 	unsigned int	num;

// 	num = 19465;
// 	s = printf("%u", num);
// 	x = ft_unsigned_num_prnt(num);
// 	printf("\noriginal %d then the function %d\n",s , x);

// 	 return (0);
// }