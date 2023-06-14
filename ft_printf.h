/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccheng-c <ccheng-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:58:14 by ccheng-c          #+#    #+#             */
/*   Updated: 2023/06/14 17:35:19 by ccheng-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h> 
# include <unistd.h> 
//# include <stdint.h>

void	ft_putchar(char c, int *len);
void	ft_putstring(char *str, int *len);
void	ft_putnumber(int n, int *len);
void	ft_putunumber(unsigned int n, int *len);
void	ft_puthex(unsigned int num, const char format, int *len);
void	ft_putpointer(uintptr_t ptr, int *len);
int		ft_printf(const char *str, ...);
int		ft_formats_check(va_list args, const char format);
#endif