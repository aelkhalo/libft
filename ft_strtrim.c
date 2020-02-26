/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 21:02:50 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/11/12 15:28:25 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, char *s1)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (c == s1[i])
			return (1);
		i++;
	}
	return (0);
}

static int	first_i(char *s1, char *set)
{
	int i;

	i = 0;
	while (ft_check(s1[i], set))
		i++;
	return (i);
}

static int	last_i(char *s1, char *set)
{
	int i;

	i = ft_strlen(s1) - 1;
	while (ft_check(s1[i], set))
		i--;
	return (i);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	char		*s;
	size_t		fi;
	size_t		li;

	if (!s1)
		return (NULL);
	str = (char *)s1;
	s = (char *)set;
	fi = first_i(str, s);
	if (fi == ft_strlen(str))
		return (ft_strdup(""));
	li = last_i(str, s);
	return (ft_substr(str, fi, li - fi + 1));
}
