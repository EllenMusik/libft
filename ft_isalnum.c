/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:11:48 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/19 18:05:23 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char i)
{
	if (ft_isdigit(i) || (i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return (1);
	else
		return (0);
}

/*
int main(void)
{
	char string_test1 = 'Z';
	int result;
	result = is_alnum(string_test1);
	printf("mein is alnum: %d\n", result);
	result = isalnum(string_test1);
	printf("isalnum: %d\n", result);
	return (0);
}
*/