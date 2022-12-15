/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:38:52 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/15 19:57:24 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_atoi(char *str);
int		is_alnum(char i);
int		is_alpha(char c);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
int		is_ascii (char i);
int		is_digit (char i);
int		is_print (char i);
size_t	ft_strlen(const char *str);

#endif