/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 04:53:54 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/25 20:41:30 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	i;
	int	check;

	if (s == NULL)
		return (write(1, "(null)", 6));
	i = 0;
	while (*s != '\0')
	{
		check = write(1, s, 1);
		if (check == -1)
			return (-1);
		i += check;
		s++;
	}
	return (i);
}

	// check = write(1, s, ft_strlen(s));
	// if (check == -1)
	// 	return (-1);
	// else
	// 	return (check);

// int main ()
// {
// 	int i;
// 	char *p = "18534";
// 	i = ft_putstr(p);
// 	printf("\n%d",i);
// 	return (0);
// }