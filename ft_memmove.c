/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:28:04 by pdelanno          #+#    #+#             */
/*   Updated: 2023/01/10 14:39:44 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 && src == 0)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*int		main(int argc, const char *argv[])
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	int		arg;

	dest = src + 1;
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (dest != ft_memmove(dest, "consectetur", 5))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 2)
	{
		if (dest != ft_memmove(dest, "con\0sec\0\0te\0tur", 10))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 3)
	{
		if (dest != ft_memmove(dest, src, 8))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 4)
	{
		if (src != ft_memmove(src, dest, 8))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	else if (arg == 5)
	{
		if (src != ft_memmove(src, dest, 0))
			write(1, "dest's adress was not returned\n", 31);
		write(1, dest, 22);
	}
	return (0);
}*/
