/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr_prnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:44:07 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/25 17:35:45 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_addr_len(unsigned long long num )
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

static void	ft_addr_prnt_re(unsigned long long addr)
{
	char	*lower;

	lower = "0123456789abcdef";
	if (addr >= 16)
		ft_addr_prnt_re (addr / 16);
	write (1, &lower[addr % 16], 1);
}

int	ft_addr_prnt(void *addr)
{
	unsigned long long	num;

	if (addr == NULL)
		return (write (1, "0x0", 3));
	write(1, "0x", 2);
	num = (unsigned long long) addr;
	ft_addr_prnt_re(num);
	return (ft_addr_len(num) + 2);
}

// #include <stdio.h>

// int main() {
//     int value = 42;
//     double pi = 3.14159;
//     char *str = "Hello, world!";
//     void *ptr = &value;

//     //printf("NULL: %p\n", NULL);	
//     //printf("%d", printf("%p", (void *)&value));//jknjkkh

//     // printf("Double: %p\n", (void *)&pi);
//     // printf("String: %p\n", (void *)str);
//     // printf("Pointer: %p\n", ptr);

//     // // Testing ft_addr_prnt
//     // ft_addr_prnt(NULL);
// 	//     printf("\n");

//     // int i = ft_addr_prnt(NULL);
// 	// printf("%d", i);
//     // printf("\n");

//     // ft_addr_prnt(&pi);
//     // printf("\n");

//     // ft_addr_prnt(str);
//     // printf("\n");

//     // ft_addr_prnt(ptr);
//     return 0;
// char *s = "0x7ffedfefb858";
// }