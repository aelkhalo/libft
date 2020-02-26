/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 23:12:12 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/11/07 18:34:58 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*ds;
	char		*e;
	const char	*sr;

	if (dst)
	{
		ds = dst;
		e = dst + size;
		sr = src;
		while (*sr != '\0' && ds < e)
			*ds++ = *sr++;
		if (ds < e)
			*ds = 0;
		else if (size > 0)
			ds[-1] = 0;
		while (*sr != '\0')
			sr++;
		return (sr - src);
	}
	return (0);
}
