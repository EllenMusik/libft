/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellensteiner <ellensteiner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:09:34 by ellensteine       #+#    #+#             */
/*   Updated: 2023/01/13 15:27:00 by ellensteine      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int wordcounter(char const *s, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while(s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			k++;
			while (s[i] == c)
				i++;
		}
		if (s[i])
			i++;
	}
	if (s[i - 1] != c)
		k++;
	printf("number of words: %d\n", k);
	return (k);
}
char **ft_split(char const *s, char c)
{
	int k;

	int k =
	malloc(sizeof(char) * (k + 1))
	return(0);
}

int main(void)
{
	ft_split("...test1...test2.test3.test4", '.');
	return(0);
}