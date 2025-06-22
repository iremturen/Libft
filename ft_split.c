/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iremturen <iremturen@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:52:56 by ituren            #+#    #+#             */
/*   Updated: 2025/06/22 12:30:09 by iremturen        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **res, int j)
{
	while (j >= 0)
	{
		free(res[j]);
		j--;
	}
	free(res);
}

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

char **ft_split(char const *s, char c)
{
	char	**res;
	int	i;
	int	j;
	int	start;
	int	end;

	j = 0;
	i = 0;
	start = 0;
	end =0;
	res = malloc(sizeof(char *) * (word_count(s,c) + 1));
	if(!res || !s)
		return (NULL);
	while(s[i])
	{ 
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		if (end > start)
		{
			res[j] = ft_substr(s, start, end - start );
			if (!res[j])
			{
				free_all(res, j- 1);
				return (NULL);
			}  
			j++;   
		}
	}
	res[j]= NULL;
	return (res);
}

