/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:32:54 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/11/11 12:40:35 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_rev(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = (char *)dst;
	s = (const char *)src;
	i = len - 1;
	while (len--)
	{
		*(d + i) = *(s + i);
		i--;
	}
	return (d);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	if (dst == src)
		return ((char *)src);
	d = (char *)dst;
	s = (char *)src;
	if (len == 0 || (d == NULL && s == NULL))
		return (d);
	if (d < s)
		ft_memcpy(d, s, len);
	else
		ft_rev(d, s, len);
	return (d);
}
