/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilhfer <guilhfer@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:11:44 by guilhfer          #+#    #+#             */
/*   Updated: 2022/03/25 22:12:16 by guilhfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	ft_print_numbers(void)
{
	int	c;

	c = '0';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}