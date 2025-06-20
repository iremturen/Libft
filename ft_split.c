/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:52:56 by ituren            #+#    #+#             */
/*   Updated: 2025/06/20 19:18:04 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int word_count(char const *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] && s[i] == c)
            i++;
        else
        {
            count++;
            while (s[i] && s[i] != c)
                i++;
        }
    }
    return count;
}

#include <stdio.h>

char **ft_split(char const *s, char c)
{

    char **res;
    int i;
    int j;

    i = 0;
    res = malloc(sizeof(char *) * (word_count(s,c) + 1));
    if(!res || !s)
        return NULL;
    while(s[i]){
        
        while (s[i]==c)
        {
            j++;
        }      
        i++;
    }
    return NULL;
}

// Merhaba 