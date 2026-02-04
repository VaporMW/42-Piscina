/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:33:44 by marcde-c          #+#    #+#             */
/*   Updated: 2026/01/27 09:00:22 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	x = 15;
// 	int	y = 6;
// 	int resultado_divisao;
// 	int resto_divisao;

// 	ft_div_mod(x, y, &resultado_divisao, &resto_divisao);
// 	printf("Divisao: %d\n", resultado_divisao);
// 	printf("Resto: %d\n", resto_divisao);
// 	return (0);
// }