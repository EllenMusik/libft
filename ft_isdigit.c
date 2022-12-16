/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:42:23 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/16 14:25:24 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_digit (char i)
{
	if (i >= '0' && i <= '9')
		return(1);
	else
		return (0);
}

/*
int main(void)
{
	char test1 = '7';
	int result;
	result = is_digit(test1);
	printf("mein is digit: %d\n", result);
	result = isdigit(test1);
	printf("isdigit: %d\n", result);
	return (0);
}
*/