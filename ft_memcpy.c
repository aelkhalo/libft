/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:15:09 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/11/13 00:04:44 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*src1;
	char		*dst1;
	size_t		i;

	i = 0;
	if (dst == src)
		return (dst);
	src1 = (const char *)src;
	dst1 = (char *)dst;
	if (src1 == NULL && dst1 == NULL)
		return (NULL);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
