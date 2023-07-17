/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   my_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mstegema <mstegema@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/17 14:15:12 by mstegema      #+#    #+#                 */
/*   Updated: 2023/07/17 14:16:37 by mstegema      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

long	my_atol(const char *str)
{
	long	i;
	long	res;
	long	neg;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
	{
		neg = -1;
		i++;
	}
	if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		if (str[i + 1] < '0' || str[i + 1] > '9')
			return (res * neg);
		i++;
	}
	return (res * neg);
}

// int	main(void)
// {
// 	char str[] = "++47";
// 	int og = atoi(str);
// 	int ft = ft_atoi(str);

// 	printf("\nog: %i\nft: %i\n\n", og, ft);
// 	return (0);
// }
