/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:22:36 by esteiner          #+#    #+#             */
/*   Updated: 2023/01/09 21:10:48 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		x++;
	}
	return (dst);
}

/*
int main()
{
	char	str1[50] = "";
	char	str2[50] = "";
	char	ssrc1[50] = "";
	char	ssrc2[50] = "";


	ft_memcpy(str1, ssrc1, 4);
	printf("Ergebnis: %s\n", str1);
	memcpy(str2, ssrc2, 4);
	printf("Ergebnis: %s\n", str2);
	return (0);
}
*/