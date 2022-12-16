/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:47:41 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/13 19:22:11 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x])
	{
		if (str[x] > 64 && str[x] < 91)
			x++;
		else if (str[x] > 96 && str[x] < 123)
			x++;
		else
		{
			return (0);
		}
	}
	return (1);
}


int main(void)
{
	char *string_test1 = "SomeTZingOrOtherOneWayOrNOtxxxx";
	char *string_test2 = "";
	char *string_test3 = "Some thing";
	char *string_test4 = ";Something";
	char *string_test5 = "SomeGThing.";

	char result;
	result = ft_str_is_alpha(string_test1) + '0';
	printf("mein is alpha: %d\n", result);
	reuslt = isalpha(string_test1) + '0';
	printf("isalpha: %d\n", result);
	result = ft_str_is_alpha(string_test2) + '0';
	printf("mein is alpha: %d\n", result);
	reuslt = isalpha(string_test2) + '0';
	printf("isalpha: %d\n", result);
	result = ft_str_is_alpha(string_test3) + '0';
	printf("mein is alpha: %d\n", result);
	reuslt = isalpha(string_test3) + '0';
	printf("isalpha: %d\n", result);
	result = ft_str_is_alpha(string_test4) + '0';
	printf("mein is alpha: %d\n", result);
	reuslt = isalpha(string_test4) + '0';
	printf("isalpha: %d\n", result);
	result = ft_str_is_alpha(string_test5) + '0';
	printf("mein is alpha: %d\n", result);
	reuslt = isalpha(string_test5) + '0';
	printf("isalpha: %d\n", result);
	return (0);
}

