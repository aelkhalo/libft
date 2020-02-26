/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:08:06 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/10/25 16:21:43 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s12;
	int		i;
	int		len;

	if (s1)
	{
		i = 0;
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		s12 = malloc(sizeof(char) * len + 1);
		if (!s12)
			return (NULL);
		while (i < len)
		{
			if (*s1 != '\0')
				s12[i] = *(char *)s1++;
			else if (*s2 != '\0')
				s12[i] = *(char *)s2++;
			i++;
		}
		s12[i] = '\0';
		return ((char *)s12);
	}
	return (NULL);
}
