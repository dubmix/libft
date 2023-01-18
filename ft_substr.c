/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:24:06 by pdelanno          #+#    #+#             */
/*   Updated: 2022/12/04 15:41:21 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s (subject) or str as variable name?

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	substr = malloc(sizeof(*str) * (len + 1));
	if (str == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (i >= start && j < len)
		{
			substr[j] = str[i];
			j++;
		}
		i++;
	}
	substr[j] = 0;
	return (substr);
}
