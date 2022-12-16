/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:30:02 by esteiner          #+#    #+#             */
/*   Updated: 2022/09/22 19:36:06 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest [x] = '\0';
	return (dest);
}

/*
int main(void)
{
	char *src = "Something to copy:)";
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	char dest[i];
	write(1,dest, i+1);
	write(1,"\n",1);
	ft_strcpy(dest,src);
	write(1,dest, i+1);
	write(1,"\n",1);
	return(0);
}
*/