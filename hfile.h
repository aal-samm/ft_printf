/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hfile.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:40:44 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/18 10:56:44 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HFILE_H
# define HFILE_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

// void	ft_putchar(char c);
void	ft_putstr(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
int		ft_count(int num);

int	ft_putchar(int c);

#endif