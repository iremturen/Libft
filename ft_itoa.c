/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:39:11 by ituren            #+#    #+#             */
/*   Updated: 2025/06/20 15:22:42 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	num_len(int n)
{
	int	len;

	len = 0;
	if(n < 0)
	{
		len=1;
		n*=-1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*reverse(char *str, int len)
{
	int		i;
	char	temp;

	i = 0;
	if (str[i] == '-')
	{
		len++;
		i++;
	}
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	if(n == 0)
		return "0";
	if (n == -2147483648)
		return "-2147483648";
	str = malloc(sizeof(char) * num_len(n) + 1 );
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[i] = '-';
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	str[i] = '\0';
	return (reverse(str, ft_strlen(str)));
}

