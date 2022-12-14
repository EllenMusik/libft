/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:42:23 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/14 10:08:07 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


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
	char string_test1 = '7';
	int result;
	result = is_digit(string_test1);
	printf("mein is alpha: %d\n", result);
	result = isdigit(string_test1);
	printf("isalpha: %d\n", result);
	return (0);
}
*/