/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 15:22:07 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/10/30 18:34:04 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*r;

	if (s)
	{
		l = ft_strlen((char *)s);
		r = malloc((size_t)l + 1);
		if (!s || !r)
			return (NULL);
		i = 0;
		while (s[i])
		{
			r[i] = f(i, s[i]);
			++i;
		}
		r[i] = '\0';
		return (r);
	}
	return (NULL);
}
