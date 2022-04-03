/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:11:27 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/25 22:11:41 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include "ft_print_numbers.c"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
