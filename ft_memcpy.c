/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 12:48:10 by ituren            #+#    #+#             */
/*   Updated: 2025/06/20 17:19:16 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memcpy(const void *dst, const void *src, size_t n)
{

    unsigned char *d= (unsigned char *)dst; // dst işaretçisini char pointera çevirdim
    const unsigned char *s= (const unsigned char *)src;// src işaretçisini const char pointera çevirdim
    while (n>0)
    {
        *d= *s; // adreslerdeki değerleri kopyalıyorum
        d++; //sonrai byrte ilerlertim
        s++; // sonraki bytea ilerletitm
        n--; // kopyalamnacak byte sayısnını azaltıyorum
    }
    return dst; //
    
}
