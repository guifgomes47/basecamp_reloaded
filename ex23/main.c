/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 14:09:40 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/02 14:50:36 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
	printf("%d\n", point->x);
	printf("%d\n", point->y);
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}
