/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:05:58 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/11/05 22:11:19 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	if (s)
	{
		s1 = (char *)malloc(len + 1 * sizeof(char));
		if (!s1 || (size_t)start >= ft_strlen((char*)s))
			return (ft_strdup("\0"));
		while (s[i] && len > 0)
		{
			s1[j] = s[i];
			j++;
			i++;
			len--;
		}
		s1[j] = '\0';
		return ((char *)s1);
	}
	return (NULL);
}
