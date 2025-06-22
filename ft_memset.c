/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iremturen <iremturen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 12:50:28 by ituren            #+#    #+#             */
/*   Updated: 2025/06/22 11:38:29 by iremturen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	* ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len>0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
