/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taydogan <taydogan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 20:28:30 by taydogan          #+#    #+#             */
/*   Updated: 2022/11/24 17:59:55 by taydogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_putchar(int c);
int		ft_print_uint(unsigned int a);
void	ft_print_u(unsigned int nb);
int		ft_print_str(char *s);
void	ft_print_p(unsigned long long nb);
int		ft_print_ptr(unsigned long long a);
int		ft_print_int(int c);
void	ft_print_h(unsigned int nb, const char format);
int		ft_print_hex(unsigned int a, const char format);
char	*ft_itoa(int n);
#endif
