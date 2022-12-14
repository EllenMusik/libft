/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:11:48 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/14 10:17:29 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


int is_alnum (char i)
{
	if (i >= '0' && i <= '9' || i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z')
		return(1);
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