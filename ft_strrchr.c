/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:25:51 by pdelanno          #+#    #+#             */
/*   Updated: 2023/01/10 15:00:17 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	if ((char)c == str[i])
		return ((char *)&str[i]);
	return (0);
}
