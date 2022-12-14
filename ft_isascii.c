/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 10:18:54 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/14 11:40:46 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <ctype.h>


int is_ascii (char i)
{
	if (i >= 0 && i <= 127)
		return(1);
	else
		return (0);
}


int main(void)
{
	char string_test1 = '\n';
	int result;
	result = is_ascii(string_test1);
	printf("mein is ascii: %d\n", result);
	result = isascii(string_test1);
	printf("isascii: %d\n", result);
	return (0);
}
