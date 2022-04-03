/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:14:46 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/25 22:15:05 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_is_negative.c"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_is_negative(0);
	return (0);
}
