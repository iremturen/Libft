/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ituren <ituren@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 17:39:11 by ituren            #+#    #+#             */
/*   Updated: 2025/06/25 19:04:39 by ituren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	len;
	long nb;

	nb = (long)n;
	len = 0;
	if (nb <= 0)
	{
		len = 1;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
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
	long	nb;

	nb = (long)n;
	i = 0;
	if (nb == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (num_len(n) + 1));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[i++] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	str[i] = '\0';
	return (reverse(str, ft_strlen(str)));
}
