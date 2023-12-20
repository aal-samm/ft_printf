/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 06:36:30 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/18 07:01:20 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hfile.h"

// ???? should i use strict 
int	ft_count(int num)
{
	int	result;

	result = 0;

	if (num == 0)
		return (1);
	if (num < 0)
		result = 1;
	while (num != 0)
	{
		result++;
		num /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*new_s;
	long	num;
	int		len;

	num = n;
	len = ft_count(num);
	new_s = malloc (len * sizeof(char) + 1);
	if (!new_s)
		return (0);
	if (num == 0)
		new_s[0] = '0';
	new_s[len] = '\0';
	if (num < 0)
	{
		new_s[0] = '-';
		num = -num;
	}
	while (num)
	{
		new_s[len - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	return (new_s);
}
