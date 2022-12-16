/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:00:55 by esteiner          #+#    #+#             */
/*   Updated: 2022/09/27 17:17:02 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x])
	{
		if (str[x] > 47 && str[x] < 58)
			x++;
		else
			return (0);
	}
	return (1);
}


int main(void)
{
	char *string_test1 = "SomeTZingOrOtherOneWayOrNOtxxxx";
	char *string_test2 = "";
	char *string_test3 = "0123457122540000";
	char *string_test4 = "12Monkeys";
	char *string_test5 = "99 ";

	char result;
	result = ft_str_is_numeric(string_test1) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test2) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test3) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test4) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
	result = ft_str_is_numeric(string_test5) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
}
