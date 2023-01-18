/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteiner <esteiner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:22:03 by esteiner          #+#    #+#             */
/*   Updated: 2023/01/18 19:46:29 by esteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*adresse;

	adresse = lst;
	if (lst == NULL)
		return (NULL);
	while (adresse->next != NULL)
		adresse = adresse->next;
	return (adresse);
}
