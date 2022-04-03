/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:40:48 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/03 00:08:03 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	delta;
	int	*arr;
	int	i;

	delta = max - min;
	arr = (int *)malloc(delta * sizeof(int));
	i = 0;
	while (i < delta)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
