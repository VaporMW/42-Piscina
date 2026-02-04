/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 13:06:16 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/27 11:29:16 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[3] = {1, 2, 3};
	int size = 3;
	int i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
		printf("%d ", tab[i++]);
	return (0);
}
