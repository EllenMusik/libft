/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:26:41 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/13 19:40:35 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


int is_alpha (char i)
{
	if (i > 64 && i < 91)
		return(1);
	else if (i > 96 && i < 123)
		return(1);
	else
		return (0);
}

/*
int main(void)
{
	char string_test1 = '';
	int result;
	result = is_alpha(string_test1);
	printf("mein is alpha: %d\n", result);
	result = isalpha(string_test1);
	printf("isalpha: %d\n", result);
	return (0);
}
*/