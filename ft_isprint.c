/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:43:09 by esteiner          #+#    #+#             */
/*   Updated: 2022/12/16 14:25:29 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_print (char i)
{
	if (i >= ' ')
		return (1);
	else if (i < ' ')
		return (0);
}


int main()
{
   int c;
   for(c = 1; c <= 127; ++c)
   {
   		if (isprint(c)!= 0)
             printf("%c ", c);
		if (is_print(c)!= 0)
             printf("%c\n", c);
   }
   return (0);
}
