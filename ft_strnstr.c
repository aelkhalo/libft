/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:30:35 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/11/06 18:10:46 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	p;
	size_t	i;
	size_t	k;

	if (needle[0] == 0)
		return ((char *)haystack);
	if (!haystack && len == 0)
		return (NULL);
	p = 0;
	while (haystack[p] != '\0' && p < len)
	{
		if (haystack[p] == needle[0])
		{
			i = 0;
			k = p;
			while (needle[i] != '\0' && haystack[p + i]
					== needle[i] && k++ < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[p]);
		}
		++p;
	}
	return (0);
}
