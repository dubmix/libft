/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:48:55 by pdelanno          #+#    #+#             */
/*   Updated: 2022/12/03 19:03:59 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*strbis;
	unsigned int	i;

	strbis = (unsigned char *)str;
	i = 0;
	while (i < n && strbis[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return (&strbis[i]);
}
