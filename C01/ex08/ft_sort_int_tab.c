/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:15:50 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/27 11:29:52 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	currentp;
	int	nextp;
	int	temp;

	currentp = 0;
	while (currentp < size)
	{
		nextp = currentp + 1;
		while (nextp < size)
		{
			if (tab[currentp] > tab[nextp])
			{
				temp = tab[currentp];
				tab[currentp] = tab[nextp];
				tab[nextp] = temp;
			}
			nextp++;
		}
		currentp++;
	}
}

#include <stdio.h>
int	main(void)
{				//0, 1, 2, 3, 4, 5, 6
	int tab[7] = {3, 4, 5, 1, 2, 7, 6};
	int size = 7;
	int i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
		printf("%d \n", tab[i++]);
	return (0);
}
