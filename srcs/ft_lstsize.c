/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mstegema <mstegema@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 15:40:26 by mstegema      #+#    #+#                 */
/*   Updated: 2022/10/06 18:02:29 by mstegema      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		res;
	t_list	*current;

	res = 0;
	current = lst;
	while (current != NULL)
	{
		current = current -> next;
		res++;
	}
	return (res);
}
