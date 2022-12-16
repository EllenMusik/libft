/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:55:16 by esteiner          #+#    #+#             */
/*   Updated: 2022/09/27 17:18:14 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x])
	{
		if (str[x] > 31)
			x++;
		else if (str[x] < 32)
			return (0);
	}
	return (1);
}


int main(void)
{
	char *string_test1 = "This is totally printable\\*#$%@^&***||//";
	char *string_test2 = "";
	char *string_test3 = "This is not\n";
	char *string_test4 = "Nor\tthis";
	char *string_test5 = "NOT* J_u_s_t kidding, it is:)";

	char result;
	result = ft_str_is_printable(string_test1) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test2) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test3) + '0';
	write(1, &result, 1);
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test4) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
	result = ft_str_is_printable(string_test5) + '0';
	write(1, &result, 1);	
	write(1, "  ", 2);
}
