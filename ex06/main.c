/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:06:42 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/25 22:09:18 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_alphabet.c"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
