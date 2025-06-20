/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 12:50:28 by ituren            #+#    #+#             */
/*   Updated: 2025/06/19 18:05:05 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	* ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b; //işaretçiyi poiter olarak tanımladım
	while (len>0)
	{
		*p = (unsigned char)c;  //bellekteki adresi işaretçiye atıyorum
		p++; //pointerı ilerletiyorum
		len--; //len değişkenini azaltıyorum
	}
	return (b); //başlangıç adresini geri döndürüyorum
}
