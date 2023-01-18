/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:11:40 by pdelanno          #+#    #+#             */
/*   Updated: 2023/01/11 14:14:24 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(*dest) * (len + 1));
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*void	ft_print_result(char const *s)
{
	int		len;
	
	len = 0;
	while (s[len] != '\0')
		len++;
	write(1, s, len);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		return (0);
	ft_print_result(ft_strdup(argv[1]));
	return (0);
}*/
