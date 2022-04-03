/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 15:42:20 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/01 16:47:28 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_range.c"

int	main(void)
{
	int	min;
	int	max;
	int	i;

	min = -5;
	max = 5;
	while (i < (max - min))
	{
		printf("%d\n", *(ft_range(min, max) + i));
		i++;
	}
}
