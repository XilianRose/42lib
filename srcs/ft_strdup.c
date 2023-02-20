/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mstegema <mstegema@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:00:32 by mstegema      #+#    #+#                 */
/*   Updated: 2022/10/06 13:01:37 by mstegema      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	count;
	char	*cpy;

	count = ft_strlen(s1) + 1;
	cpy = ft_calloc(count, sizeof(char));
	if (cpy)
	{
		ft_memcpy(cpy, s1, count);
		return (cpy);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	s1[] = "abcdefg";

// 	char	*og = strdup(s1);
// 	char	*ft = ft_strdup(s1);

// 	printf("\nog: %s\nft: %s\n\n", og, ft);
// 	return (0);
// }
