/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strendstr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mstegema <mstegema@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/22 12:02:16 by mstegema      #+#    #+#                 */
/*   Updated: 2023/03/22 12:52:14 by mstegema      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
// #include <stdio.h>

/* The strendstr() function locates the occurrence of the null-terminated string
needle at the end of the null-terminated string haystack.

Returns the needle found in haystack and NULL if not found */

char	*ft_strendstr(const char *hay, const char *needle)
{
	size_t	i;
	size_t	ii;
	size_t	j;

	i = ft_strlen(hay);
	j = ft_strlen(needle);
	while (i > 0)
	{
		ii = i;
		j = ft_strlen(needle);
		while (hay[ii] == needle[j] && ii > 0 && j > 0)
		{
			j--;
			ii--;
		}
		if (hay[ii] == needle[j])
			return ((char *)(hay + ii));
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char hay[] = "this is the moment";
// 	char needle[] = "mo";

// 	char *s1 = ft_strendstr(hay, needle);
// 	printf("\n1. ft: %s\n\n", s1);

// 	char *s2 = ft_strendstr("asdhash.ext", ".ext");
// 	printf("\n2. ft: %s\n\n", s2);

// 	char *s3 = ft_strendstr("asdhash.exte", ".ext");
// 	printf("\n3. ft: %s\n\n", s3);

// 	char *s4 = ft_strendstr("asdhash.exte", ".ext\n");
// 	printf("\n4. ft: %s\n\n", s4);

// 	return (0);
// }

