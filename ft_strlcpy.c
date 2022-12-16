/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:56:01 by esteiner          #+#    #+#             */
/*   Updated: 2022/09/27 17:23:29 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	i = 0;
	if (src[x] == '\0')
		return (0);
	while (src[i])
		i++;
	while (src[x] && x < size -1)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < size)
	{	
		dest[x] = '\0';
		x++;
	}
	return (i);
}

/*
int main(void)
{
	char string_test1[] = "This is ";
	unsigned int	i;
	unsigned int size;
	unsigned int	x;

	i = 0;
	while (string_test1[i] != '\0')
	{
		i++;
	}
	size = 10;
	if (size > i)
		size = i + 1;
	char dest[size];
	x = ft_strlcpy(dest, string_test1, size);
	printf("length is %d\n", i);
	printf("return value is %d\n", x);
	write(1, dest, size);
	write(1, "\n", 1);
	printf("Size of copied string is %d\n", size);
}
*/