/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-samm <aal-samm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 18:22:36 by aal-samm          #+#    #+#             */
/*   Updated: 2023/12/27 13:16:18 by aal-samm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <stdarg.h>

int		ft_addr_prnt(void *addr);
int		ft_hex_prnt(unsigned int num, bool upper_c);
int		ft_num_prnt(int num);
int		ft_printf(const	char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_num_un_prnt(unsigned int num);

#endif