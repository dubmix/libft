/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:24:21 by pdelanno          #+#    #+#             */
/*   Updated: 2023/01/18 13:43:18 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_strrev(char *str)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

int		int_len(int n)
{
	int		len;
	int		neg;

	len = 1;
	neg = 0;
	if (n < 0)
		neg = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len + neg + 1);
}
	

char	*ft_conv(int n)
{
	size_t	len;
	int 	neg;
	char	*str;
	
	neg = 1;
	if (n < 0)
	{
		neg = -1;
		n = -n;
	}
	str = ft_calloc(int_len(n), sizeof(*str));
	if (str == 0)
		return (NULL);
	len = 0;
	while (n != 0)
	{
		str[len] = '0' + (n % 10);
		n = n / 10;
		len++;
	}
	if (neg == -1)
		str[len] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = ft_calloc(int_len(n), sizeof(*str));
	if (str == 0)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	str = ft_conv(n);
	ft_strrev(str);
	return (str);
}

int		main(void)
{
	int		nb;
	
	nb = 0;
	printf("ft is %s\n", ft_itoa(nb));
	printf("%d\n", itoa(nb));
	nb = 9;
	printf("%s\n", ft_itoa(nb));
	nb = -9;
	printf("%s\n", ft_itoa(nb));
	nb = 10;
	printf("%s\n", ft_itoa(nb));
	nb = -10;
	printf("%s\n", ft_itoa(nb));
	nb = 8124;
	printf("%s\n", ft_itoa(nb));
	nb = -9874;
	printf("%s\n", ft_itoa(nb));
	nb = 543000;
	printf("%s\n", ft_itoa(nb));
	nb = -2147483648LL;
	printf("%s\n", ft_itoa(nb));
	nb = 2147483647;
	printf("%s\n", ft_itoa(nb));
	return (0);
}
