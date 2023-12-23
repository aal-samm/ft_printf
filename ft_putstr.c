/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 04:53:54 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/23 19:53:22 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

int	ft_putstr(const char *s)
{
	// if (!s)
	// 	return (write(1, "(NULL)", 6));
	// else
		return (write(1, s, ft_strlen(s)));
}


// int main ()
// {
// 	int i;
// 	char *p = "18534";
// 	i = ft_putstr(p);
// 	printf("\n%d",i);
// 	return (0);
// }