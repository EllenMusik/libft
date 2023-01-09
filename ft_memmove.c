/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:13:15 by esteiner          #+#    #+#             */
/*   Updated: 2023/01/09 16:43:14 by esteiner         ###   ########.fr       */
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
		((unsigned int *)dst)[x] = ((unsigned int *)src)[x];
		x--;
		}
		((unsigned int *)dst)[0] = ((unsigned int *)src)[0];
	}
	return (dst);
}

/*
int main(void)
{
	char *src = "thanks to @apellicc for this test !\r\n";
        char dst1[0xF0];
        int size = strlen(src);
        char *r1 = memmove (dst1, src, size);
        char *r2 = ft_memmove(dst1, src, size);
 
        if (r1 != r2)
        {
            exit(1);
			printf("test failed");
		}
        r1 = memmove ("", "" - 1, 0);
        r2 = ft_memmove("", "" - 1, 0);
        if (r1 != r2)
		{
            exit(1);
			printf("test failed");
		}
		printf("test sucsess?");
        exit(0);
}
*/
