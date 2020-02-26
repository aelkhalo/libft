/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:24:46 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/10/22 19:12:07 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	int			j;
	int			r;
	const char	*s1;

	i = 0;
	j = -1;
	s1 = s;
	r = ft_strlen((char	*)s1);
	while (i <= r)
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j == -1)
		return (NULL);
	else
		return (char *)(s + j);
}
