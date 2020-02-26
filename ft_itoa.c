/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhalo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/02 14:45:04 by aelkhalo          #+#    #+#             */
/*   Updated: 2019/11/09 15:10:26 by aelkhalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count(int n)
{
	int		c;

	c = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		c++;
		n /= 10;
	}
	return (c);
}

char		*ft_cal(char *s, unsigned int nb, unsigned int size, unsigned int i)
{
	while (nb >= 10)
	{
		s[i--] = (char)(nb % 10 + 48);
		nb /= 10;
	}
	s[i] = (char)(nb % 10 + 48);
	s[size] = '\0';
	return (s);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	nb;
	unsigned int	i;
	unsigned int	size;
	unsigned int	r;

	r = 0;
	if (n < 0)
	{
		nb = (unsigned int)(n * -1);
		r++;
	}
	else
		nb = (unsigned int)n;
	size = (unsigned int)ft_count(nb);
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1 + r))))
		return (0);
	if (n < 0 && (str[i] = '-'))
		size++;
	i = size - 1;
	return (ft_cal(str, nb, size, i));
}
