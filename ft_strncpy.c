/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:42:37 by esteiner          #+#    #+#             */
/*   Updated: 2022/09/27 17:14:34 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}


int main(void)
{
	char *src = "Some";
	int	i;
	int n;
	int count_nulls;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	n = 8;
	char dest[n];
	ft_strncpy(dest,src,n);
	write(1,dest, n);
	write(1,"\n",1);

	printf("Size of source array: %d\n", i);
	printf("Size of destination array: %d\n", n);

	i = 0;
	count_nulls = 0;
	while (i < n)
	{
		if (dest[i] == '\0')
		count_nulls++;
		i++;
	}
	printf("Number of zeros to fill destination array: %d\n", count_nulls);	
}
