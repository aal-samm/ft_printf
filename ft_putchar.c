/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 03:37:34 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/25 20:26:29 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write (1, &c, 1));
}
// #include <unistd.h>
// #include <stdio.h>

// int main ()
// {
// 	// int i;
// 	 return ft_putchar(9);
// }
// #include <unistd.h>

// int ft_putchar(int c) {
//     return write(1, &c, 1);
// }

// int main() {
//     int i;
//     ft_putchar('f');
//     // printf("\nThe char is %d\n", i); // Use %c to print the character
//     return 0;
// }
