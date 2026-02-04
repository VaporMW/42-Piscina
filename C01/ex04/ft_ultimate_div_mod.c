/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:09:44 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/27 09:00:24 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux1;

	aux1 = *a / *b;
	*b = *a % *b;
	*a = aux1;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int x = 15;
// 	int y = 6;

// 	ft_ultimate_div_mod(&x, &y);
// 	printf("Divisao: %d\n", x);
// 	printf("Resto: %d\n", y);
// 	return (0);
// }
