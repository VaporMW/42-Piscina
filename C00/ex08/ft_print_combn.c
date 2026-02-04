/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:21:30 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/25 18:09:11 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_numbers(int n, int *tab)
{
	int	i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (tab[0] < (10 - n) || n == 0)
	{
		write(1, ", ", 2);
	}
}

void	ft_solve(int n, int index, int *tab)
{
	int	start;

	if (index == n)
	{
		ft_put_numbers(n, tab);
		return ;
	}

	if (index == 0)
		start = 0;
	else
		start = tab[index - 1] + 1;

	while (start <= 9)
	{
		tab[index] = start;
		ft_solve(n, index + 1, tab);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n > 0 && n < 10)
	{
		ft_solve(n, 0, tab);
	}
}
// int	main(void)
// {
// 	ft_print_combn(2);
// 	write(1, "\n", 1);
// 	return (0);
// }