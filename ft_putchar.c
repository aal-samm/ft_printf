/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 03:37:34 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/20 00:39:21 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.h"

int	ft_putchar(int c)
{
	return (write (1, &c, 1));
}
int main ()
{
	//char x = 'c';
	int i;
	
	 i = ft_putchar('c');
	return printf("the num is %d", i);
}