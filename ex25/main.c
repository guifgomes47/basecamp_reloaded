/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 17:13:57 by guilhfer          #+#    #+#             */
/*   Updated: 2022/04/02 18:09:04 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_foreach.c"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	tab[] = {'a', 'b', 'c', 'f', 'h', 'y'};

	ft_foreach(tab, 4, &ft_putchar);
}