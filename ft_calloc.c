/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:38:53 by esteiner          #+#    #+#             */
/*   Updated: 2023/01/11 20:59:04 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	bzero(ptr, size * count);
	return (ptr);
}

/*
int main(void)
{
	char *ptr;
	int i = 0;
	ptr = ft_calloc(5, sizeof(char));
	printf("patr adresse : %s", ptr);
	free(ptr);
	return(0);
}
*/