/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 12:47:57 by ituren            #+#    #+#             */
/*   Updated: 2025/06/23 17:42:10 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		ch;
	size_t				i;

	str = s;
	ch = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (str[i] == ch)
			return ((void *)&str[i]);
		n--;
		i++;
	}
	return (NULL);
}
