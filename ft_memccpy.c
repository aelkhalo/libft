/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:19:14 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/10/24 16:23:05 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char		*src1;
	unsigned char	*dst1;
	unsigned char	c1;
	size_t			i;

	i = 0;
	src1 = (const char *)src;
	dst1 = (unsigned char *)dst;
	c1 = (unsigned char)c;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (dst1[i] == c1)
			return (&dst1[++i]);
		i++;
	}
	return (NULL);
}
