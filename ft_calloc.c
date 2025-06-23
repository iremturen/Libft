/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:34:14 by ituren            #+#    #+#             */
/*   Updated: 2025/06/23 17:44:25 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			i;

	i = 0;
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
