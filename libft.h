/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:38:52 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/16 14:40:13 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_atoi(char *str);
void	*ft_bzero(void *s, size_t n);
int		is_alnum(char i);
int		is_alpha(char c);
int		is_ascii(char i);
int		is_digit(char i);
int		is_print(char i);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
size_t	ft_strlen(const char *str);

#endif