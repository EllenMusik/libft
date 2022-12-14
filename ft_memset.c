/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:21:23 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/14 18:25:16 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *str, int i, size_t n)
{
	int x;

	x = 0;
	while (x < n)
	{
		str[x] = i;
		x++;
	}
}

int main()
{
	char* str1;
	char* str2;
	str1 = "hallo Welt";
	str2 = "hallo Welt";

	ft_memset(str1, 3, 6);
	printf("Ergebnis: %s\n", str1);
	memset(str2, 3, 6);
	printf("Ergebnis: %s\n", str2);
	return (0);
}