/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ellensteiner <ellensteiner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:09:34 by ellensteine       #+#    #+#             */
/*   Updated: 2023/01/13 20:05:20 by ellensteine      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int freefunktion(char **split, int m)
{
	while (m > 0)
	{
		free(split[m]);
		m--;
	}
	free(split);
	return(0);
}

static char **mallocfunktion(char const *s, char c, int k)
{
	int		i;
	int		l;
	int		m;
	char 	**splitm;

	i = 0;
	l = 0;
	m = 0;
	splitm = malloc(sizeof(char*) * (k + 1));
	if (!splitm)
		return(0);
	while(k > 0)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			l++;
		}
		splitm[m] = malloc(sizeof(char) * (l + 1));
		if (!splitm[m])
		{
			freefunktion(splitm, m);
			return (0);
		}
		l = 0;
		m++;
		k--;
	}
	return(splitm);
}

static int wordcounter(char const *s, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while(s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			k++;
			while (s[i] == c)
				i++;
		}
		if (s[i])
			i++;
	}
	if (i != 0 && s[i - 1] != c)
		k++;
	return (k);
}

static int fillinfunktion(char **split, char const *s, char c, int k)
{
	int i;
	int l;
	int m;

	i = 0;
	l = 0;
	m = 0;
	while (k > 0)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			split[m][l] = s[i];
			l++;
			i++;
		}
		split[m][l] = '\0';
		l = 0;
		m++;
		k--;
	}
	split[m] = 0;
	return (0);
}

char **ft_split(char const *s, char c)
{
	int		k;
	char	**split;
	
	if (!s)
		return(0);
	k = wordcounter(s, c);
	if (s[0] == 0)
		k = 0;
	split = mallocfunktion(s, c, k);
	if (!split)
		return (0);
	fillinfunktion(split, s, c, k);
	return (split);
}

/*
int main(void)
{
	char *tobesplit;
	char **splitted;
	int i;

	i = 0;
	tobesplit = "...test1...test2.test3.test4";
	splitted = ft_split(tobesplit, '.');
	while (i < 4)
	{
		printf("%s,", splitted[i]);
		i++;
	}
	return(0);
}
*/