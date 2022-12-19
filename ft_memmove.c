/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:13:15 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/19 18:07:18 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (dst < src)
	{
		dst = ft_memcpy(dst, src, len);
	}
	else if (dst > src)
	{
		x = len - 1;
		while (x > 0)
		{
		((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		x--;
		//<-----
		}
		((unsigned char *)dst)[0] = ((unsigned char *)src)[0];
	}
	return (dst);
}

/*
int main()
{
	char	str1[50] = "hallo Welt";
	char	str2[50] = "hallo Welt";
	char	ssrc1[50] = "testtesttest";
	char	ssrc2[50] = "testtesttest";

	ft_memmove(str1, ssrc1, 4);
	printf("Ergebnis: %s\n", str1);
	memmove(str2, ssrc2, 4);
	printf("Ergebnis: %s\n", str2);
	return (0);
}
*/
