/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:33:39 by esteiner          #+#    #+#             */
/*   Updated: 2022/10/04 12:19:03 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

/*
int main(void)
{
	char src[] = "2\nAppend this :)";
	char dest[] = "To this";
	int i =0, j = 0;
	while (src[i] != '\0') i++;
	while (dest[j] != '\0') j++;
	printf("The total length should be %d\n", i+j);
	write(1, ft_strcat(dest, src), i+j);
	write(1,"\n",1);
	j = 0;
	while (dest[j] != '\0') j++;
	printf("The total length is %d\n", j);
	return (0);
}
*/